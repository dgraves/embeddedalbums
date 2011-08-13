<?php
function picasa_create_album($userid, $albumid) {
  // Generate the document body 
  echo('<style type="text/css">#picasaPhotos img {border: 1px solid #000; margin: 5px 5px 5px 5px;}</style>');
  echo('<pre id="picasaSubtitle"></pre>');
  echo('<div id="picasaPhotos"></div>');

  // Load the scripts
  echo('<script src="/files/photoalbums/jquery/1.6.2/jquery.min.js" type="text/javascript"></script>');
  echo('<script src="/files/photoalbums/slimbox/2.04/js/slimbox2.js" type="text/javascript"></script>');
  echo('<link rel="stylesheet" href="/files/photoalbums/slimbox/2.04/css/slimbox2.css" type="text/css" media="screen" />');
  echo('<script src="/files/photoalbums/js/picasaalbum.js" type="text/javascript"></script>');

  // Load the album
  echo('<script type="text/javascript">');
  echo('loadPicasaAlbum("' . $userid . '", "' . $albumid . '");');
  echo('</script>');
}
?>
