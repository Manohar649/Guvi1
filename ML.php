<?php
if(isset($_POST['search']))
{
	 $search="https://schema.org/docs/search_results.html?q=".$_POST['search1'];
	header('Location:'.$search);
}	
$keya=$_POST['search1'];
$urls=$search;
$options['host'] = "localhost";   
$options['port'] = 5984;  
// Creating connection  
$couch = new CouchSimple($options);   
$couch->send("GET", "/");   
// Create a new database "javatpoint". 
 $database1="searchengine";
$couch->send("PUT", "/$database1");  
// Create a new document in the database.  
$couch->send("PUT", "/$database1/$keya", '{"keys":"$keya"}');   
// Fetching document    
class CouchSimple {  
function CouchSimple($options) {  
foreach($options AS $key => $value) {  
$this->$key = $value;  
}  
}   
function send($method, $url, $post_data = NULL) {  
$s = fsockopen($this->host, $this->port, $errno, $errstr);   
if(!$s) {  
echo "$errno:$errstr\n";   
return false;  
}   
$request = "$method $url HTTP/1.0\r\nHost: $this->host\r\n";   
if (@$this->user) {  
$request .= "Authorization: Basic ".base64_encode("$this->user:$this->pass")."\r\n";   
}  
if($post_data) {  
$request .= "Content-Length: ".strlen($post_data)."\r\n\r\n";   
$request .= "$post_data\r\n";  
}   
else {  
$request .= "\r\n";  
}  
fwrite($s, $request);   
$response = "";   
while(!feof($s)) {  
$response .= fgets($s);  
}  
list($this->headers, $this->body) = explode("\r\n\r\n", $response);   
return $this->body;  
}  
}  
?>
<html>
<head>
<style>
#go1{
background-color: Green;
color:white;
margin: 10px 2px;
}
footer{
padding:140;
}
input[type=text] {
 width: 100%;
 padding: 12px 20px;
 margin: 5px 0;
 box-sizing: border-box;
}
body{
padding:140px;
background-image: url("first.png");
}
</style>
</head>
<body>
<form name="engine" action="index.php" method="post"  >
<center><img src="SearchEngine.png" alt="Logo"/><br/>
<input type="text" name="search1" placeholder="search ml."  width="100%" size='90'/>
<input type="submit" name="search" value ="Go" size="10" id="go1"/></center>
</form>
</body>
<center><footer >&copy; Copyright 2019 </footer></center>
</html>
