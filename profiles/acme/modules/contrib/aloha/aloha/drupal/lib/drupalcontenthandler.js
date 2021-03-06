define([
  'aloha/core',
  'jquery',
  'aloha/contenthandlermanager',
  'aloha/console',
  'vendor/sanitize'
],
  function (Aloha, $, ContentHandlerManager, console, Sanitize) {
    "use strict";

    var sanitize, setting = {};

    // very restricted sanitize config
    setting.restricted = {
      elements: ['b', 'em', 'i', 'strong', 'u', 'del', 'p', 'span', 'div', 'br']
    };

    // basic sanitize config
    setting.basic = {
      elements: [
        'a', 'abbr', 'b', 'blockquote', 'br', 'cite', 'code', 'dd', 'del', 'dl',
        'dt', 'em',
        'i', 'li', 'ol', 'p', 'pre', 'q', 'small', 'strike', 'strong', 'sub',
        'sup', 'u', 'ul'
      ],

      attributes: {
        'a': ['href'],
        'blockquote': ['cite'],
        'q': ['cite'],
        'abbr': ['title']
      },

      protocols: {
        'a': {'href': ['ftp', 'http', 'https', 'mailto', '__relative__']},
        'blockquote': {'cite': ['http', 'https', '__relative__']},
        'q': {'cite': ['http', 'https', '__relative__']}
      }
    };

    var DrupalContentHandler = ContentHandlerManager.createHandler({
      /**
       * Handle the content from eg. paste action and sanitize the html
       * @param content
       */
      handleContent: function (content) {
        var config;
        // sanitize does not work in IE7. It tries to set the style attribute via setAttributeNode() and this is know to not work in IE7
        // (see http://www.it-blogger.com/2007-06-22/microsofts-internetexplorer-und-mitglied-nicht-gefunden/ as a reference)
        if ($.browser.msie && $.browser.version <= 7) {
          return content;
        }

        // dynamic allowed tags drupal sprint
        var allowedTags = Aloha.activeEditable.originalObj
          .closest('[data-allowed-tags]')
          .attr('data-allowed-tags');
        if (allowedTags) {
          var allows = allowedTags.split(',');
          sanitize = new Sanitize({elements: allows});
        }
        else if (typeof sanitize === 'undefined') {
          config = this.setting.basic;
          // add a filter to stop cleaning elements with contentEditable "false"
          config.filters = [
            function (elem) {
              return elem.contentEditable !== "false";
            }
          ];
          sanitize = new Sanitize(config);
        }

        if (typeof content === 'string') {
          content = $('<div>' + content + '</div>').get(0);
        }
        else if (content instanceof $) {
          content = $('<div>').append(content).get(0);
        }

        return $('<div>').append(sanitize.clean_node(content)).html();
      }
    });

    return DrupalContentHandler;
  });
