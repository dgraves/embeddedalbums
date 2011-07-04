function albumHtml(album) {
  var html = '<table style="width:164px; float: left;"><tr><td align="center" style="height:164px;">'
  html += '<a href=' + album.url + '><img src=' + album.img + ' width="160" height="160" style="margin:1px 0 0 4px;"></a>';
  html += '</td></tr><tr><td style="text-align:center;font-family:arial,sans-serif;font-size:12px">';
  html += '<p><a href=' + album.url + ' style="color:#4D4D4D;font-weight:bold;text-decoration:none;">';
  html += album.title + '</a><br>' + album.date;
  if (album.photos) {
    html += '<br>photos: ' + album.photos;
  } else if (album.albums) {
    html += '<br>albums: ' + album.albums;
  }
  html += '</p></td></tr></table>';
  return html;
}
  
function generateAlbumThumbs(albums, div) {
  var html = '';
  var i;
  for (i = 0; i < albums.length; ++i) {
    html += albumHtml(albums[i]);
  }

  document.getElementById(div).innerHTML = html;
}

