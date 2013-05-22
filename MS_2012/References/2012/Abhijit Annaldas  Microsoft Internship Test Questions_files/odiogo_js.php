//-- Odiogo Listen Button
//-- Javascript include file
//-- v1.9.6
//-- Copyright (c) 2008 Odiogo. All rights reserved.
//-- PK

var _odiogo_feed_id = "";
var _odiogo_directory_name = "";
var _odiogo_listen_button_image_url = "";
var _odiogo_listen_button_text_link = "";
var _odiogo_platform = "";
var _odiogo_code = "";
var _odiogo_show_sub_button = "";
var _odiogo_pcast_link = "";
var _odiogo_itpc_link = "";
var _odiogo_show_help = "";


_odiogo_feed_id = "696866";
_odiogo_directory_name = "/abhijit-annaldas";
_odiogo_listen_button_image_url = "";
_odiogo_listen_button_text_link = "";
_odiogo_platform = "bl";
_odiogo_code = "1";
_odiogo_show_sub_button = "1";
_odiogo_pcast_link = "pcast://podcasts.odiogo.com/abhijit-annaldas/podcasts-xml.php";
_odiogo_itpc_link = "itpc://podcasts.odiogo.com/abhijit-annaldas/podcasts-xml.php";
// cache_hit = "1";


function isWhitespace (charToCheck)
{
var whitespaceChars = " \t\n\r\f";
return whitespaceChars.indexOf (charToCheck) != -1;
}

function ltrim (str)
{
for (var k = 0; k < str.length && isWhitespace (str.charAt (k)); k++);
return str.substring (k, str.length);
}

function rtrim (str)
{
for (var j = str.length-1; j >= 0 && isWhitespace (str.charAt (j)); j--);
return str.substring (0, j+1);
}

function trim (str)
{
return ltrim (rtrim (str));
}

function KeepAlphaNum (str)
{
var result = "";
for (var i = 0; i < str.length; i++)
{
var c = str.charAt (i).toLowerCase ();
if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c == ' '))
{
result += c;
}
}
result = trim (result);
return result;
}

function odg_getInnerText (elt)
{
var result = null;
if (elt)
{
result = elt.textContent; // FF
if (result == undefined)
{
result = elt.innerText; // IE
}
}
return result;
}

function odg_getInnerHTML (elt)
{
var result = null;
if (elt)
{
result = elt.innerHTML;
}
return result;
}

function odg_GetElementByTagClassName (tag, className)
{
result = null;

var o1 = document.getElementsByTagName (tag);

for (var i = 0; o1 && i < o1.length && result == null; i++)
{
if (o1[i].className.toLowerCase () == className)
{
result = o1[i];
}
}
return result;
}

function OdiogoCleanArticleTitle (article_title)
{
var result = article_title;
result = result.replace (/&#(\d+);/g, ""); // remove html code like &#038;
result = result.replace (/&nbsp;/gi, " ");
result = result.replace (/&lsquo;/gi, "");
result = result.replace (/&rsquo;/gi, "");
result = result.replace (/&hellip;/gi, "");
result = result.replace (/&mdash;/gi, "");
result = result.replace (/&amp;/gi, "");
result = result.replace(/<\s*([a-oq-z]|p\w|\!)[^>]*>|<\s*\/\s*([a-oq-z]|p\w)[^>]*>/gi, ""); // remove tags

result = KeepAlphaNum (result);
return result;
}

function showOdiogoReadNowButton_str (fid, article_title, article_id, width, height)
{
var result;
if (fid == "1002,1003,1005,1004,1006,1484,1560,1561,1562,1563,1564,1565,1566")
{
result = "<a href=\"javascript:showOdiogoReadNowFrame ('" + fid + "', '" + OdiogoCleanArticleTitle (article_title) + "', '" + article_id + "', 420, 80);\"><img src=\"http://static.jpost.com/images/2007/site/ic/tbar.listen_now.gif\" border=\"0\" alt=\"Listen to this article. Powered by Odiogo.com\" title=\"Listen to this article. Powered by Odiogo.com\"></a>";
}
else if (fid == "1672")
{
result = "<a href=\"javascript:showOdiogoReadNowFrame ('" + fid + "', '" + OdiogoCleanArticleTitle (article_title) + "', '" + article_id + "', 290, 55);\"><img src=\"http://www.odiogo.com/images/odiogo_listen_now_77x18.gif\" width=\"77\" height=\"18\" border=\"0\" style=\"border-width:0px;\" alt=\"Listen to this article. Powered by Odiogo.com\" title=\"Listen to this article. Powered by Odiogo.com\"></a>";
}
else if (fid == "101651,101652,101653,101654,101655")
{
result = "<a href=\"javascript:showOdiogoReadNowFrame ('" + fid + "', '" + OdiogoCleanArticleTitle (article_title) + "', '" + article_id + "', 420, 80);\"><img src=\"http://images.politico.com/global/v3/odiogo_speaker.gif\" border=\"0\" align=\"absmiddle\" alt=\"Listen to this article. Powered by Odiogo.com\" title=\"Listen to this article. Powered by Odiogo.com\"> Listen</a>";
}
else if (fid == "1129")
{
result = "<a href=\"javascript:showOdiogoReadNowFrame ('" + fid + "', '" + OdiogoCleanArticleTitle (article_title) + "', '" + article_id + "', 290, 55);\">Listen to this Post</a> (Powered by <a href=\"http://www.odiogo.com\">Odiogo</a>)";
}
else if (fid == "1080")
{
result = "<a href=\"javascript:showOdiogoReadNowFrame ('" + fid + "', '" + OdiogoCleanArticleTitle (article_title) + "', '" + article_id + "', 290, 55);\"><img src=\"http://www.odiogo.com/images/odiogo_listen_now_40x29.gif\" width=\"40\" height=\"29\" border=\"0\" alt=\"Listen to this article. Powered by Odiogo.com\" title=\"Listen to this article. Powered by Odiogo.com\"></a>";
}
else if (_odiogo_listen_button_image_url.length > 0)
{
result = "<a href=\"javascript:showOdiogoReadNowFrame ('" + fid + "', '" + OdiogoCleanArticleTitle (article_title) + "', '" + article_id + "', 290, 55);\"><img src=\"" + _odiogo_listen_button_image_url + "\" border=\"0\" alt=\"Listen to this article. Powered by Odiogo.com\" title=\"Listen to this article. Powered by Odiogo.com\"></a>";
}
else if (_odiogo_listen_button_text_link.length > 0)
{
result = "<a href=\"javascript:showOdiogoReadNowFrame ('" + fid + "', '" + OdiogoCleanArticleTitle (article_title) + "', '" + article_id + "', 290, 55);\">" + _odiogo_listen_button_text_link + "</a>";
}
else
{
result = "<a href=\"javascript:showOdiogoReadNowFrame ('" + fid + "', '" + OdiogoCleanArticleTitle (article_title) + "', '" + article_id + "', 290, 55);\"><img src=\"http://www.odiogo.com/images/odiogo_listen_now_77x18.gif\" width=\"77\" height=\"18\" border=\"0\" style=\"border-width:0px;\" alt=\"Listen to this article. Powered by Odiogo.com\" title=\"Listen to this article. Powered by Odiogo.com\"></a>";
}
if (_odiogo_show_help == "1")
{
result = result + "<script language=\"javascript\" type=\"text/javascript\" src=\"http://widget.odiogo.com/csspopup.js\"></script>";
result = result + "<style type='text/css'>#blanket {background-color:#111;opacity: 0.65;filter:alpha(opacity=65);position:absolute;z-index: 9001;top:0px;left:0px;width:100%;}#popUpDiv {position:absolute;background-color:#eeeeee;width:300px;height:300px;z-index: 9002;}</style>";
result = result + "<style type='text/css'>.help_odiogo { font-family: Verdana; font-size: 9px; color: #666666; vertical-align: top;}</style>";
result = result + "<div id=\"blanket\" style=\"display:none;\"></div><div id=\"popUpDiv\" style=\"display:none;\"><a href=\"#\" onclick=\"popup('popUpDiv')\">Close</a></div>";
result = result + "<span class=help_odiogo> [<a href=\"#\" onclick=\"popup('popUpDiv')\">?</a>]</span>";
}

return result;
}

function showOdiogoSubscribeButton_str (directory_name)
{
var html_link = 'http://podcasts.odiogo.com' + directory_name + '/podcasts-html.php';
var result;
result = '<a ' + (_odiogo_platform == "vox" ? 'target=_blank' : '') + ' href="' + html_link + '" id="odiogo_subscribe_link"><img id="odiogo_subscribe_button" src="http://www.odiogo.com/images/odiogo_button.gif" width="91" height="17" border="0" alt="Subscribe to this podcast feed" title="Subscribe to this podcast feed"></a>';
return result;
}

function showOdiogoReadNowButton (fid, article_title, article_id, width, height)
{
var str = showOdiogoReadNowButton_str (fid, article_title, article_id, width, height);
document.write (str);
}

function showOdiogoSubscribeButton (directory_name)
{
var str = showOdiogoSubscribeButton_str (directory_name);
document.write (str);
}

function OdiogoReadNowSrc (fid, article_title, article_id, args)
{
var result = 'http://podcasts.odiogo.com/read_now.php?' + args + '&article_title=' + OdiogoCleanArticleTitle (article_title);
return result;
}

function OdiogoReadNow (fid, article_title, article_id, args, width, height)
{
document.write (OdiogoReadNowString (fid, article_title, article_id, args, width, height));
}

function showOdiogoReadNowFrame (fid, article_title, article_id, width, height)
{
var obj = document.getElementById ('iframe_odiogo_' + article_id);
if (obj)
{
if (obj.height == 0)
{
closeAllOdiogoReadNowFrames (fid);
obj.width = width;
obj.height = height;
obj.src = OdiogoReadNowSrc (fid, article_title, article_id, 'fid=' + fid + '&call=2&autostart=yes&color_scheme=1', article_id, width, height);
}
else
{
// article is currently playing, stop it.
obj.width = 0;
obj.height = 0;
obj.src = "";
//obj.getElementById ("audioplayer1").SetVariable ("closePlayer", 1);
}
}
}

function closeAllOdiogoReadNowFrames (fid)
{
var frms = document.getElementsByTagName ('iframe');
if (frms)
{
for (var i = 0; i < frms.length; i++)
{
var f = frms[i];
if (f.id.indexOf ('iframe_odiogo') != -1 && f.src.length > 0)
{
f.width = 0;
f.height = 0;
f.src = "";
//f.getElementById ("audioplayer1").SetVariable ("closePlayer", 1);
}
}
}
}

function closeOdiogoReadNowFrame (fid, article_id)
{
var frms = document.getElementsByTagName ('iframe');
if (frms)
{
for (var i = 0; i < frms.length; i++)
{
var f = frms[i];
if (f.id.indexOf ('iframe_odiogo_' + article_id) != -1 && f.src.length > 0)
{
f.width = 0;
f.height = 0;
f.src = "";
//f.getElementById ("audioplayer1").SetVariable ("closePlayer", 1);
}
}
}
}

function showInitialOdiogoReadNowFrame_str (fid, article_id, width, height)
{
var result = '<iframe name="iframe_odiogo_' + article_id + '" id="iframe_odiogo_' + article_id + '" src="" width="' + width + '" height="' + height + '" frameborder="0" scrolling="no"></iframe>';
return result;
}

function showInitialOdiogoReadNowFrame (fid, article_id, width, height)
{
document.write (showInitialOdiogoReadNowFrame_str (fid, article_id, width, height));
}

function odg_IsPageStaticTypePad (o)
{
return o && o.innerHTML && o.innerHTML.indexOf ("<!-- page -->") >= 0;
}

function odg_IsPageStaticBlogger (o)
{
return false;
}

function odg_IsPageStaticTeraPad (o)
{
//return false;
return o && o.innerHTML && o.innerHTML.indexOf ("<!-- end news content -->") == -1;
}

function odg_IsPageStaticVox (o)
{
return false;
}

function odg_IsPageStaticSquareSpace (o)
{
return false;
}

function odg_GetNCNTypePad (fid, o, n)
{
var result = null;
var count = 0;
for (var i = 0; i < o.length && result == null; i++)
{
var cn = o[i].className.toLowerCase ();
if (cn == "entry-header")
{
if (count == n)
{
result = o[i];
}
count++;
}
}
return result;
}

function odg_GetNCNBlogger (fid, o, n)
{
var result = null;
var count = 0;
for (var i = 0; i < o.length && result == null; i++)
{
var cn = o[i].className.toLowerCase ();
if (cn == "post-title entry-title" || cn == "post-title")
{
if (count == n)
{
result = o[i];
}
count++;
}
}
return result;
}

function odg_GetNCNVox (fid, o, n)
{
var result = null;
var count = 0;
for (var i = 0; i < o.length && result == null; i++)
{
var cn = o[i].className.toLowerCase ();
if (cn == "asset-name page-header2" || cn == "asset-name page-header1")
{
if (count == n)
{
result = o[i];
}
count++;
}
}
return result;
}

function odg_GetNCNSquareSpace (fid, o, n)
{
var result = null;
var count = 0;
for (var i = 0; i < o.length && result == null; i++)
{
var cn = o[i].className.toLowerCase ();
if (cn == "title")
{
if (count == n)
{
result = o[i];
}
count++;
}
}
return result;
}

function odg_ScanPageTypePad (fid)
{
var o1 = document.getElementById ("pagebody");
if (o1 && ! odg_IsPageStaticTypePad (o1))
{
var o2 = o1.getElementsByTagName ("div");
var o3 = o1.getElementsByTagName ("h3");
if (o2 && o3)
{
var count = 0;
for (var i = 0; i < o2.length; i++)
{
var cn = o2[i].className.toLowerCase ();
if (cn == "entry-body")
{
var title = odg_getInnerText (odg_GetNCNTypePad (fid, o3, count));
if (title)
{
var str1 = showOdiogoReadNowButton_str (fid, title, count, 290, 55);
var str2 = showInitialOdiogoReadNowFrame_str (fid, count, 0, 0);
if (o2[i].innerHTML.indexOf ("showOdiogoReadNow") == -1 && document.getElementById ("odiogo_span_" + i) == null) // not already inserted?
{
// o2[i].innerHTML = str1 + "<br>" + str2 + o2[i].innerHTML;
var newspan = document.createElement ("span");
newspan.id = "odiogo_span_" + i;
newspan.innerHTML = str1 + "<br>" + str2;
o2[i].parentNode.insertBefore (newspan, o2[i]);
}
}
count++;
}
}
}
else
{
// no o2
}
}
else
{
//  no o1
}
}

function odg_ScanPageBlogger (fid)
{
var o1 = document.getElementById ("main-wrapper");
if (! o1)
{
o1 = document.getElementById ("outer-wrapper");
}
if (! o1)
{
o1 = document.getElementById ("content");
}
if (! o1)
{
o1 = document.getElementById ("main_wrap");
}
if (! o1)
{
o1 = document.getElementById ("main");
}
if (o1 && ! odg_IsPageStaticBlogger (o1))
{
var o2 = o1.getElementsByTagName ("div");
var o3 = o1.getElementsByTagName ("h3");
var o4 = o1.getElementsByTagName ("h2");
if (o2 && o3)
{
var count = 0;
for (var i = 0; i < o2.length; i++)
{
var cn = o2[i].className.toLowerCase ();
if (cn == "post-body" || cn == "post-body entry-content")
{
var title = odg_getInnerText (odg_GetNCNBlogger (fid, o3, count));
if (! title) // Added by Pk 07/17/09
{
title = odg_getInnerText (odg_GetNCNBlogger (fid, o4, count));
}
if (title)
{
var str1 = showOdiogoReadNowButton_str (fid, title, count, 290, 55);
var str2 = showInitialOdiogoReadNowFrame_str (fid, count, 0, 0);
if (o2[i].innerHTML.indexOf ("showOdiogoReadNow") == -1 && document.getElementById ("odiogo_span_" + i) == null) // not already inserted?
{
// o2[i].innerHTML = str1 + "<br>" + str2 + o2[i].innerHTML;
var newspan = document.createElement ("span");
newspan.id = "odiogo_span_" + i;
newspan.innerHTML = str1 + "<br>" + str2;
o2[i].parentNode.insertBefore (newspan, o2[i]);
}
}
count++;
}
}
}
else
{
// no o2
}
}
else
{
//  no o1
}
}

function odg_ScanPageTeraPad (fid)
{
var o1 = document.getElementById ("content");
if (o1 && ! odg_IsPageStaticTeraPad (o1))
{
var o2 = o1.getElementsByTagName ("h1");
if (o2)
{
var count = 0;
for (var i = 0; i < o2.length; i++)
{
var cn = o2[i].className.toLowerCase ();
if (true /* cn == "" */)
{
var title = odg_getInnerText (o2[count]);
if (title)
{
var str1 = showOdiogoReadNowButton_str (fid, title, count, 290, 55);
var str2 = showInitialOdiogoReadNowFrame_str (fid, count, 0, 0);
if (o2[i].innerHTML.indexOf ("showOdiogoReadNow") == -1  && document.getElementById ("odiogo_span_" + i) == null) // not already inserted?
{
// o2[i].innerHTML = o2[i].innerHTML + "<br>" + str1 + "<br>" + str2;
var newspan = document.createElement ("span");
newspan.id = "odiogo_span_" + i;
newspan.innerHTML = "<br>" + str1 + "<br>" + str2;
o2[i].appendChild (newspan);
}
}
count++;
}
}
}
else
{
// no o2
}
}
else
{
//  no o1
}
}

function odg_ScanPageVox (fid)
{
var o1 = document.getElementById ("content-inner");
if (o1 && ! odg_IsPageStaticVox (o1))
{
var o2 = o1.getElementsByTagName ("div");
var o3 = o1.getElementsByTagName ("h2"); // post list
var o4 = o1.getElementsByTagName ("h1"); // indiv. post page
if (o2 && (o3 || o4))
{
var count = 0;
for (var i = 0; i < o2.length; i++)
{
var cn = o2[i].className.toLowerCase ();
if (cn == "asset-body preview-links")
{
var title = odg_getInnerText (odg_GetNCNVox (fid, o3, count)); // post list
if (! title)
{
title = odg_getInnerText (odg_GetNCNVox (fid, o4, count)); // indiv. post page
}
if (title)
{
var str1 = showOdiogoReadNowButton_str (fid, title, count, 290, 55);
var str2 = showInitialOdiogoReadNowFrame_str (fid, count, 0, 0);
if (o2[i].innerHTML.indexOf ("showOdiogoReadNow") == -1) // not already inserted?
{
o2[i].innerHTML = str1 + "<br>" + str2 + o2[i].innerHTML;
}
}
count++;
}
}
}
else
{
// no o2
}
}
else
{
//  no o1
}
}

function odg_ScanPageSquareSpace (fid)
{
var o1 = document.getElementById ("contentWrapper");
if (o1 && ! odg_IsPageStaticSquareSpace (o1))
{
var o2 = o1.getElementsByTagName ("div");
var o3 = o1.getElementsByTagName ("h2");
if (o2 && o3)
{
var count = 0;
for (var i = 0; i < o2.length; i++)
{
var cn = o2[i].className.toLowerCase ();
if (cn == "body")
{
var title = odg_getInnerHTML (odg_GetNCNSquareSpace (fid, o3, count)); // workaround for nbsp in title
if (title)
{
var str1 = showOdiogoReadNowButton_str (fid, title, count, 290, 55);
var str2 = showInitialOdiogoReadNowFrame_str (fid, count, 0, 0);
if (o2[i].innerHTML.indexOf ("showOdiogoReadNow") == -1) // not already inserted?
{
o2[i].innerHTML = str1 + "<br>" + str2 + o2[i].innerHTML;
}
}
count++;
}
}
}
else
{
// no o2
}
}
else
{
//  no o1
}

}

function odg_ScanPageMain ()
{
if (_odiogo_platform == "tp" || _odiogo_platform == "mt")
{
odg_ScanPageTypePad (_odiogo_feed_id);
}
else if (_odiogo_platform == "bl")
{
odg_ScanPageBlogger (_odiogo_feed_id);
}
else if (_odiogo_platform == "terapad")
{
odg_ScanPageTeraPad (_odiogo_feed_id);
}
else if (_odiogo_platform == "vox")
{
odg_ScanPageVox (_odiogo_feed_id);
}
else if (_odiogo_platform == "squarespace")
{
odg_ScanPageSquareSpace (_odiogo_feed_id);
}
}

/*
 *
 * ContentLoaded.js
 *
 * Author: Diego Perini (diego.perini at gmail.com)
 * Summary: Cross-browser wrapper for DOMContentLoaded
 * Updated: 05/10/2007
 * License: GPL/CC
 * Version: 1.0
 *
 * Notes:
 *
 *  based on code by Dean Edwards and John Resig
 *  http://dean.edwards.name/weblog/2006/06/again/
 *  http://javascript.nwbox.com/ContentLoaded/
 *
 */

// @w window reference
// @f function reference
function ContentLoaded (w, fn) {
var d = w.document,
u = w.navigator.userAgent.toLowerCase();
function init(e) {
if (!arguments.callee.done) {
arguments.callee.done = true;
fn(e);
}
}
// konqueror/safari
if (/khtml|webkit/.test(u)) {
(function () {
if (/complete|loaded/.test(d.readyState)) {
init('poll');
} else {
setTimeout(arguments.callee, 10);
}
})();
// internet explorer all versions
} else if (/msie/.test(u) && !w.opera) {
(function () {
try {
d.documentElement.doScroll('left');
} catch (e) {
setTimeout(arguments.callee, 10);
return;
}
init('poll');
})();
d.attachEvent('onreadystatechange',
function (e) {
if (d.readyState == 'complete') {
d.detachEvent('on'+e.type, arguments.callee);
init(e.type);
}
}
);
// browsers having native DOMContentLoaded
} else if (d.addEventListener &&
(/gecko/.test(u) && parseFloat(u.split('rv:')[1]) >= 1.8) ||
(/opera/.test(u) && parseFloat(u.split('opera ')[1]) > 9)) {

d.addEventListener('DOMContentLoaded',
function (e) {
this.removeEventListener(e.type, arguments.callee, false);
init(e.type);
}, false
);
// fallback to last resort
} else {

// from Simon Willison
var oldonload = w.onload;
w.onload = function (e) {
if (typeof oldonload == 'function') {
oldonload(e || w.event);
}
init((e || w.event).type);
};
}
}

function odg_AddEvent (func)
{
ContentLoaded (window, func);
}

if (_odiogo_code == "1")
{
odg_AddEvent (odg_ScanPageMain);
if (_odiogo_show_sub_button == "1")
{
showOdiogoSubscribeButton (_odiogo_directory_name);
}
}

