<div class="clearfix">
	<div class="image left"><?php print $fields['field_image']->content?></div>
	<div class="info">
		<h3><?php print $fields['title']->content?></h3>
		<div class="authoring">
			Post created at <?php //print $fields['created']->content?> in xxx group by <?php //print $fields['name']->content?>
		</div>
		<?php print $fields['body']->content?>
	</div>
</div>

<div class="comment-link"><?php print $fields['comments_link']->content?></div>