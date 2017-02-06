const char TXT_CONTENT_TYPE_JSON[] PROGMEM = "application/json";
const char TXT_CONTENT_TYPE_INFLUXDB[] PROGMEM = "application/x-www-form-urlencoded";
const char TXT_CONTENT_TYPE_TEXT_HTML[] PROGMEM = "text/html; charset=utf-8";
const char TXT_CONTENT_TYPE_TEXT_PLAIN[] PROGMEM = "text/plain";
const char TXT_CONTENT_TYPE_IMAGE_SVG[] PROGMEM = "image/svg+xml";

const char WEB_PAGE_HEADER[] PROGMEM = "<html>\
<head>\
<title>{t}</title>\
<meta name='viewport' content='width=device-width'>\
<style type='text/css'>\
body{font-family:Arial;}\
table{width:100%}\
td{vertical-align:top;}\
a{text-decoration:none;padding:10px;background:blue;color:white;display:block;width:auto;border-radius:5px;}\
input[type='text']{width:100%;}\
input[type='password']{width:100%;}\
</style>\
</head><body>\
<h3 style='min-height:100px;'><a href='/' style='background:none;width:0;'><img src='/luftdaten_logo.svg' style='float:left;margin-right:20px'/></a>{t} Feinstaubsensor {id}<br/><small>Firmware {fw}</small></h3>\
";

const char WEB_PAGE_FOOTER[] PROGMEM = "<br/><br/><a href='/' style='display:inline;'>Zurück zur Startseite</a><br/><br/><br/>\
<a href='http://codefor.de/' target='_blank' style='display:inline;background:none;width:0px;'><img src='/cfg_logo.svg' style='width:200px;max-width:50%;'/></a>\
</body></html>\r\n";

const char WEB_ROOT_PAGE_CONTENT[] PROGMEM = "<a href='/values'>Aktuelle Werte</a><br/>\
<a href='http://opendata-stuttgart.github.io/feinstaub-map/' target='_blank'>Karte der aktiven Sensoren (externer Link)</a><br/>\
<a href='/config'>Konfiguration</a><br/>\
<a href='/removeConfig'>Konfiguration löschen</a><br/>\
<a href='/reset'>Sensor neu starten (Reset)</a><br/>\
<table style='width:100%;'>\
<tr><td style='width:33%;'><a href='/debug?level=0'>Debug null</a></td>\
<td style='width:33%;'><a href='/debug?level=1'>Debug Error</a></td>\
<td style='width:33%;'><a href='/debug?level=2'>Debug Warning</a></td>\
</tr><tr>\
<td><a href='/debug?level=3'>Debug Info low</a></td>\
<td><a href='/debug?level=4'>Debug Info medium</a></td>\
<td><a href='/debug?level=5'>Debug Info high</a></td>\
</tr>\
</table>\
";

const char WEB_CONFIG_SCRIPT[] PROGMEM = "<script>function setSSID(ssid){document.getElementById('wlanssid').value=ssid.innerText||ssid.textContent;document.getElementById('wlanpwd').focus();}</script>";

const char WEB_REMOVE_CONFIG_CONTENT[] PROGMEM = "<h3>Konfiguration wirklich löschen?</h3>\
<table><tr><td><a href='/removeConfig?confirm=yes'>Löschen</a></td><td><a href='/'>Abbrechen</a></td></tr></table>\
";

const char WEB_RESET_CONTENT[] PROGMEM = "<h3>Sensor wirklich neu starten?</h3>\
<table><tr><td><a href='/reset?confirm=yes'>Neu starten</a></td><td><a href='/'>Abbrechen</a></td></tr></table>\
";

const char LUFTDATEN_INFO_LOGO_SVG[] PROGMEM = "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\
<!-- Generator: Adobe Illustrator 15.1.0, SVG Export Plug-In . SVG Version: 6.00 Build 0)  -->\
<!DOCTYPE svg PUBLIC \"-//W3C//DTD SVG 1.1//EN\" \"http://www.w3.org/Graphics/SVG/1.1/DTD/svg11.dtd\">\
<svg version=\"1.1\" id=\"Layer_1\" xmlns=\"http://www.w3.org/2000/svg\" xmlns:xlink=\"http://www.w3.org/1999/xlink\" x=\"0px\" y=\"0px\" width=\"100px\" height=\"88.891px\" viewBox=\"0 0 100 88.891\" enable-background=\"new 0 0 100 88.891\" xml:space=\"preserve\">\
<path fill=\"#1ABC9C\" d=\"M90.277,66.571v0.094h-1.388h-5.556c-2.046,0-3.705-1.656-3.705-3.704c0-2.044,1.659-3.7,3.705-3.7h5.556  c2.046,0,3.702-1.661,3.702-3.704c0-2.046-1.656-3.704-3.702-3.704s-3.704-1.659-3.704-3.705c0-2.045,1.658-3.704,3.704-3.704 c0.255,0,0.505,0.025,0.743,0.076C95.417,44.91,100,49.675,100,55.557C100,61.219,95.757,65.884,90.277,66.571z\"/>\
<path fill=\"#1ABC9C\" d=\"M70.371,44.444c-2.044,0-3.704-1.659-3.704-3.704c0-2.044,1.66-3.705,3.704-3.705  c0.257,0,0.503,0.025,0.745,0.076c5.78,0.391,10.365,5.155,10.365,11.036c0,5.667-4.243,10.33-9.722,11.016v0.098h-1.389H55.583  c-7.432,0-21.038,0-25.953,0c-2.045,0-3.704,1.658-3.704,3.7c0,2.048,1.659,3.704,3.704,3.704h40.741h1.389v0.098  c5.479,0.684,9.722,5.352,9.722,11.015c0,5.882-4.585,10.645-10.365,11.037c-0.242,0.047-0.492,0.076-0.745,0.076  c-2.044,0-3.704-1.661-3.704-3.705c0-2.045,1.66-3.704,3.704-3.704c2.043,0,3.704-1.658,3.704-3.704  c0-2.045-1.661-3.704-3.704-3.704H29.63h-1.389v-0.096c-5.48-0.686-9.724-5.352-9.724-11.017c0-1.953,0.544-3.762,1.432-5.352  C8.345,53.594,0,42.599,0,29.63C0,13.267,13.265,0,29.63,0c11.12,0,20.798,6.134,25.864,15.195c1.23-0.212,2.475-0.38,3.766-0.38  c10.919,0,19.98,7.882,21.851,18.265c-2.582-1.843-5.648-3.048-8.979-3.361c-2.553-4.475-7.356-7.495-12.871-7.495  c-2.964,0-5.712,0.889-8.026,2.389C48.952,14.767,40.17,7.407,29.63,7.407c-12.274,0-22.223,9.949-22.223,22.223  c0,12.271,9.949,22.223,22.223,22.223c4.812,0,15.097,0,22.594,0h18.146c2.043,0,3.704-1.659,3.704-3.705  C74.075,46.101,72.417,44.444,70.371,44.444z\"/>\
</svg>";

const char CFG_LOGO_SVG[] PROGMEM = "<?xml version=\"1.0\" encoding=\"utf-8\"?>\
<!-- Generator: Adobe Illustrator 16.0.0, SVG Export Plug-In . SVG Version: 6.00 Build 0)  -->\
<!DOCTYPE svg PUBLIC \"-//W3C//DTD SVG 1.1//EN\" \"http://www.w3.org/Graphics/SVG/1.1/DTD/svg11.dtd\">\
<svg version=\"1.1\" xmlns=\"http://www.w3.org/2000/svg\" xmlns:xlink=\"http://www.w3.org/1999/xlink\" x=\"0px\" y=\"0px\"\
 width=\"413.859px\" height=\"100px\" viewBox=\"0 0 413.859 100\" enable-background=\"new 0 0 413.859 100\" xml:space=\"preserve\">\
<g id=\"Ebene_2\">\
</g>\
<g id=\"Ebene_1\">\
	<g>\
		<g>\
			<g>\
				<path fill=\"#1E1E1C\" d=\"M254.928,15.062c-1.463-0.941-2.545-1.27-3.813-1.27c-2.261,0-3.481,1.412-3.481,4.475v1.549h9.222\
					v3.579h-9.222V43.54h-3.957V23.396h-6.684v-3.579h6.684v-1.458c0-5.743,2.775-8.145,7.296-8.145\
					c2.166,0,3.623,0.568,4.942,1.367L254.928,15.062z\"/>\
				<path fill=\"#1E1E1C\" d=\"M270.04,40.338c4.85,0,7.628-4.094,7.628-8.658c0-4.565-2.778-8.66-7.628-8.66\
					c-4.846,0-7.621,4.095-7.621,8.66C262.419,36.244,265.194,40.338,270.04,40.338 M270.04,19.439\
					c7.247,0,11.673,5.696,11.673,12.24c0,6.541-4.426,12.235-11.673,12.235c-7.245,0-11.671-5.694-11.671-12.235\
					C258.369,25.136,262.795,19.439,270.04,19.439\"/>\
				<path fill=\"#1E1E1C\" d=\"M303.071,27.349c-0.328-2.73-1.739-4.329-4.565-4.329c-4.141,0-8.045,3.904-8.045,11.955v8.565h-3.954\
					V19.816h3.954v4.378c1.836-2.873,4.797-4.757,8.752-4.757c4.708,0,7.53,2.827,7.815,7.911H303.071z\"/>\
				<path fill=\"#1E1E1C\" d=\"M256.196,84.68c-1.507,3.296-4.802,4.805-8.283,4.805c-7.153,0-13.319-5.462-13.319-16.855\
					c0-11.387,6.166-16.849,13.603-16.849c6.493,0,10.355,4.187,11.812,10.026l-3.906,1.175c-1.458-4.801-3.765-7.249-7.905-7.249\
					c-5.604,0-9.323,3.909-9.323,12.896c0,8.993,3.719,12.898,9.323,12.898c4.517,0,6.964-3.249,7.389-9.087h-7.389v-3.954h11.671\
					v16.616h-3.437L256.196,84.68z\"/>\
				<path fill=\"#1E1E1C\" d=\"M268.032,74.514h14.071c-0.705-3.769-3.201-5.933-7.057-5.933\
					C271.236,68.581,268.834,70.935,268.032,74.514 M286.293,78.09h-18.545c0.237,4.706,3.11,7.811,7.299,7.811\
					c3.574,0,6.024-1.74,7.624-4.707l3.151,1.646c-2.586,4.995-6.352,6.646-10.775,6.646c-6.922,0-11.344-5.324-11.344-12.243\
					c0-6.683,4.232-12.235,11.344-12.235c7.34,0,11.246,5.222,11.246,11.438V78.09z\"/>\
				<path fill=\"#1E1E1C\" d=\"M306.968,72.912c-0.328-2.732-1.74-4.331-4.563-4.331c-4.143,0-8.048,3.905-8.048,11.955v8.566h-3.954\
					v-23.72h3.954v4.377c1.835-2.872,4.798-4.754,8.752-4.754c4.71,0,7.532,2.821,7.815,7.906H306.968z\"/>\
				<path fill=\"#1E1E1C\" d=\"M339.11,89.103h-3.951V72.254c0-2.588-0.756-3.623-2.592-3.623c-2.256,0-4.188,2.68-4.188,9.317v11.154\
					h-3.956V72.254c0-2.588-0.751-3.623-2.587-3.623c-2.259,0-4.188,2.68-4.188,9.317v11.154h-3.955v-23.72h3.955v3.012\
					c1.224-1.975,3.109-3.389,5.555-3.389c2.682,0,4.234,1.505,4.894,3.858c1.223-2.26,3.344-3.858,5.836-3.858\
					c2.919,0,5.177,1.882,5.177,6.402V89.103z\"/>\
				<path fill=\"#1E1E1C\" d=\"M351.438,85.905c3.061,0,7.583-1.883,7.583-7.25v-0.75h-5.181c-4.049,0-6.307,1.689-6.307,4.373\
					C347.534,84.537,349.088,85.905,351.438,85.905 M362.972,89.103h-3.202l-0.565-3.34c-1.505,2.166-4.845,3.722-8.375,3.722\
					c-3.955,0-7.346-2.357-7.346-7.206c0-5.272,4.235-7.765,10.735-7.765h4.803v-1.04c0-3.671-2.592-4.893-5.463-4.893\
					c-2.778,0-4.849,1.741-5.603,4.048l-3.481-0.94c1.082-4.141,4.752-6.683,9.084-6.683c5.553,0,9.413,2.586,9.413,9.131V89.103z\"\
					/>\
				<path fill=\"#1E1E1C\" d=\"M388.099,89.103h-3.956V73.431c0-3.298-1.553-4.85-4.378-4.85c-3.72,0-6.966,4.048-6.966,10.971v9.551\
					h-3.953v-23.72h3.953v4.377c1.693-2.732,4.661-4.754,8.048-4.754c4.942,0,7.252,3.014,7.252,7.578V89.103z\"/>\
			</g>\
			<polygon fill=\"#1E1E1C\" points=\"409.572,65.383 402.561,82.75 394.606,65.383 390.184,65.383 400.441,87.503 395.831,98.705 \
				399.784,98.705 413.859,65.383\"/>\
		</g>\
		<g>\
			<polygon fill=\"#FF8282\" points=\"55.843,9.094 55.843,10.385 55.843,92.207 62.688,92.207 64.6,92.207 66.232,92.207 66.232,9.094\"/>\
			<g>\
				<path fill=\"#FF645F\" d=\"M97.05,100c0.712,0,1.65-0.642,1.65-1.352V1.297c0-0.712-0.938-1.295-1.65-1.295H64.6\
					c-0.714,0-0.964,0.29-0.964,0.648v1.945v6.49c0,0.715,0.25,1.305,0.964,1.305h22.063c0.716,0,1.649,0.578,1.649,1.292v76.579\
					c0,0.715-0.934,1.349-1.649,1.349H64.6c-0.714,0-0.964,0.242-0.964,0.6v1.946v6.492c0,0.71,0.25,1.352,0.964,1.352H97.05z\"/>\
			</g>\
			<polygon fill=\"#8CDBA6\" points=\"111.688,9.094 111.688,10.385 111.688,92.207 120.411,92.207 122.079,92.207 122.079,9.094\"/>\
			<g>\
				<path fill=\"#21D68F\" d=\"M120.779,99.942V89.559c14.286,0,24.256-17.758,24.256-39.585c0-21.828-9.97-39.589-24.256-39.589V0\
					c19.481,0,34.64,22.419,34.64,49.974C155.419,77.526,140.261,99.942,120.779,99.942\"/>\
				<path fill=\"#00ABFA\" d=\"M12.985,68.016v14.32v4.605c0,7.769,4.973,13.059,12.831,13.059h2.208h6.358h7.502\
					c0.359,0,0.973-0.642,0.973-1.352v-7.79c0-0.71-0.906-1.248-1.622-1.248h-7.457h-3.806h-2.356c-3.363,0-4.238-1.589-4.238-5.429\
					V78.06v-8.494v-7.616c0-7.834-3.187-10.717-7.062-12.135c3.876-1.417,7.062-4.297,7.062-12.125v-5.41V18.552v-3.261\
					c0-3.772,0.753-4.898,4.238-4.898h2.933h3.721h7.615c0.359,0,0.973-0.592,0.973-1.307V1.298c0-0.713-0.906-1.296-1.622-1.296\
					h-6.237h-5.889h-3.293c-7.858,0-12.831,5.088-12.831,12.688v4.076V33.75c0,0-0.256,3.898-0.444,5.225\
					c-0.491,3.512-4.795,6.519-7.458,6.479H1.001C0.288,45.454,0,46.015,0,46.729v7.785c0,0.716,0.288,1.331,1.001,1.331h3.729\
					c3.399-0.047,7.695,2.817,8.021,7.093C12.848,64.176,12.985,68.016,12.985,68.016\"/>\
				<path fill=\"#BD3B38\" d=\"M64.6,0.002h-3.681h-4.107c-0.713,0-0.969,0.583-0.969,1.297v2.397v5.39v1.307h0.969H64.6h1.636V9.086\
					V1.299V0.002H64.6z\"/>\
				<path fill=\"#BD3B38\" d=\"M55.843,90.858v3.68v4.11c0,0.71,0.256,1.352,0.969,1.352h2.4H64.6h1.633v-1.352v-7.79V89.61H64.6\
					h-7.788h-0.969V90.858z\"/>\
				<path fill=\"#00B05C\" d=\"M120.411,0.002h-3.679h-4.109c-0.712,0-0.936,0.583-0.936,1.297v2.397v5.39v1.307h0.936h7.788h1.668\
					V9.086V1.299V0.002H120.411z\"/>\
				<path fill=\"#00B05C\" d=\"M111.688,90.858v3.68v4.11c0,0.71,0.224,1.352,0.936,1.352h2.397h5.391h1.668v-1.352v-7.79V89.61h-1.668\
					h-7.788h-0.936V90.858z\"/>\
				<path fill=\"#78CCC7\" d=\"M176.623,68.016v14.32v4.605c0,7.769,4.878,13.059,12.735,13.059h2.209h6.36h7.501\
					c0.357,0,1.064-0.642,1.064-1.352v-7.79c0-0.71-1-1.248-1.715-1.248h-7.458h-3.806h-2.356c-3.359,0-4.144-1.429-4.144-5.27\
					V82.06V69.565v-7.616c0-2.521-0.74-4.806-1.315-6.104h-17.429c4.786,1.299,6.834,3.015,7.812,7.185\
					C176.567,65.104,176.623,68.016,176.623,68.016\"/>\
				<path fill=\"#78CCC7\" d=\"M175.886,38.971c-1.005,3.401-3.25,5.187-7.261,6.483h16.354c1.016-2.596,2.035-4.328,2.035-7.766\
					v-5.407V18.552v-3.261c0-3.772,0.657-4.898,4.144-4.898h2.933h3.718h7.62c0.357,0,1.064-0.592,1.064-1.307V1.298\
					c0-0.713-1-1.298-1.715-1.298h-6.236h-5.887h-3.297c-7.857,0-12.735,5.09-12.735,12.69v4.079v16.98\
					C176.623,33.75,176.39,37.275,175.886,38.971\"/>\
				<path fill=\"#96DBD6\" d=\"M178.415,50.73c2.628,0.966,5.513,2.518,7.284,5.114h19.079c0.715,0,1.715-0.615,1.715-1.329v-7.787\
					c0-0.714-1-1.274-1.715-1.274h-19.799C183.68,48.052,180.591,49.938,178.415,50.73\"/>\
				<path fill=\"#40A6A6\" d=\"M164.545,45.454c-0.716,0-0.909,0.561-0.909,1.274v7.789c0,0.712,0.193,1.327,0.909,1.327h3.726h17.429\
					c-1.169-2.597-4.077-4.375-6.152-5.185c2.177-0.797,4.133-2.607,5.433-5.206h-16.354H164.545z\"/>\
			</g>\
		</g>\
	</g>\
</g>\
</svg>";

// Created by http://oleddisplay.squix.ch/ Consider a donation
// In case of problems make sure that you are using the font file with the correct version!
const char Monospaced_plain_9[] PROGMEM = {
	0x05, // Width: 5
	0x0C, // Height: 12
	0x20, // First Char: 32
	0xE0, // Numbers of Chars: 224

	// Jump Table:
	0xFF, 0xFF, 0x00, 0x05,  // 32:65535
	0x00, 0x00, 0x06, 0x05,  // 33:0
	0x00, 0x06, 0x07, 0x05,  // 34:6
	0x00, 0x0D, 0x09, 0x05,  // 35:13
	0x00, 0x16, 0x0A, 0x05,  // 36:22
	0x00, 0x20, 0x0A, 0x05,  // 37:32
	0x00, 0x2A, 0x09, 0x05,  // 38:42
	0x00, 0x33, 0x05, 0x05,  // 39:51
	0x00, 0x38, 0x08, 0x05,  // 40:56
	0x00, 0x40, 0x07, 0x05,  // 41:64
	0x00, 0x47, 0x07, 0x05,  // 42:71
	0x00, 0x4E, 0x09, 0x05,  // 43:78
	0x00, 0x57, 0x06, 0x05,  // 44:87
	0x00, 0x5D, 0x07, 0x05,  // 45:93
	0x00, 0x64, 0x06, 0x05,  // 46:100
	0x00, 0x6A, 0x09, 0x05,  // 47:106
	0x00, 0x73, 0x09, 0x05,  // 48:115
	0x00, 0x7C, 0x0A, 0x05,  // 49:124
	0x00, 0x86, 0x0A, 0x05,  // 50:134
	0x00, 0x90, 0x09, 0x05,  // 51:144
	0x00, 0x99, 0x0A, 0x05,  // 52:153
	0x00, 0xA3, 0x09, 0x05,  // 53:163
	0x00, 0xAC, 0x09, 0x05,  // 54:172
	0x00, 0xB5, 0x09, 0x05,  // 55:181
	0x00, 0xBE, 0x09, 0x05,  // 56:190
	0x00, 0xC7, 0x09, 0x05,  // 57:199
	0x00, 0xD0, 0x06, 0x05,  // 58:208
	0x00, 0xD6, 0x06, 0x05,  // 59:214
	0x00, 0xDC, 0x09, 0x05,  // 60:220
	0x00, 0xE5, 0x09, 0x05,  // 61:229
	0x00, 0xEE, 0x09, 0x05,  // 62:238
	0x00, 0xF7, 0x07, 0x05,  // 63:247
	0x00, 0xFE, 0x0A, 0x05,  // 64:254
	0x01, 0x08, 0x0A, 0x05,  // 65:264
	0x01, 0x12, 0x09, 0x05,  // 66:274
	0x01, 0x1B, 0x0A, 0x05,  // 67:283
	0x01, 0x25, 0x09, 0x05,  // 68:293
	0x01, 0x2E, 0x0A, 0x05,  // 69:302
	0x01, 0x38, 0x09, 0x05,  // 70:312
	0x01, 0x41, 0x0A, 0x05,  // 71:321
	0x01, 0x4B, 0x0A, 0x05,  // 72:331
	0x01, 0x55, 0x08, 0x05,  // 73:341
	0x01, 0x5D, 0x07, 0x05,  // 74:349
	0x01, 0x64, 0x0A, 0x05,  // 75:356
	0x01, 0x6E, 0x0A, 0x05,  // 76:366
	0x01, 0x78, 0x09, 0x05,  // 77:376
	0x01, 0x81, 0x0A, 0x05,  // 78:385
	0x01, 0x8B, 0x09, 0x05,  // 79:395
	0x01, 0x94, 0x09, 0x05,  // 80:404
	0x01, 0x9D, 0x0A, 0x05,  // 81:413
	0x01, 0xA7, 0x0A, 0x05,  // 82:423
	0x01, 0xB1, 0x09, 0x05,  // 83:433
	0x01, 0xBA, 0x09, 0x05,  // 84:442
	0x01, 0xC3, 0x09, 0x05,  // 85:451
	0x01, 0xCC, 0x09, 0x05,  // 86:460
	0x01, 0xD5, 0x09, 0x05,  // 87:469
	0x01, 0xDE, 0x0A, 0x05,  // 88:478
	0x01, 0xE8, 0x09, 0x05,  // 89:488
	0x01, 0xF1, 0x0A, 0x05,  // 90:497
	0x01, 0xFB, 0x08, 0x05,  // 91:507
	0x02, 0x03, 0x0A, 0x05,  // 92:515
	0x02, 0x0D, 0x08, 0x05,  // 93:525
	0x02, 0x15, 0x09, 0x05,  // 94:533
	0x02, 0x1E, 0x0A, 0x05,  // 95:542
	0x02, 0x28, 0x05, 0x05,  // 96:552
	0x02, 0x2D, 0x0A, 0x05,  // 97:557
	0x02, 0x37, 0x09, 0x05,  // 98:567
	0x02, 0x40, 0x0A, 0x05,  // 99:576
	0x02, 0x4A, 0x0A, 0x05,  // 100:586
	0x02, 0x54, 0x0A, 0x05,  // 101:596
	0x02, 0x5E, 0x09, 0x05,  // 102:606
	0x02, 0x67, 0x0A, 0x05,  // 103:615
	0x02, 0x71, 0x0A, 0x05,  // 104:625
	0x02, 0x7B, 0x0A, 0x05,  // 105:635
	0x02, 0x85, 0x08, 0x05,  // 106:645
	0x02, 0x8D, 0x0A, 0x05,  // 107:653
	0x02, 0x97, 0x0A, 0x05,  // 108:663
	0x02, 0xA1, 0x09, 0x05,  // 109:673
	0x02, 0xAA, 0x0A, 0x05,  // 110:682
	0x02, 0xB4, 0x09, 0x05,  // 111:692
	0x02, 0xBD, 0x09, 0x05,  // 112:701
	0x02, 0xC6, 0x0A, 0x05,  // 113:710
	0x02, 0xD0, 0x09, 0x05,  // 114:720
	0x02, 0xD9, 0x0A, 0x05,  // 115:729
	0x02, 0xE3, 0x0A, 0x05,  // 116:739
	0x02, 0xED, 0x0A, 0x05,  // 117:749
	0x02, 0xF7, 0x09, 0x05,  // 118:759
	0x03, 0x00, 0x09, 0x05,  // 119:768
	0x03, 0x09, 0x0A, 0x05,  // 120:777
	0x03, 0x13, 0x09, 0x05,  // 121:787
	0x03, 0x1C, 0x0A, 0x05,  // 122:796
	0x03, 0x26, 0x08, 0x05,  // 123:806
	0x03, 0x2E, 0x06, 0x05,  // 124:814
	0x03, 0x34, 0x07, 0x05,  // 125:820
	0x03, 0x3B, 0x09, 0x05,  // 126:827
	0x03, 0x44, 0x0A, 0x05,  // 127:836
	0x03, 0x4E, 0x0A, 0x05,  // 128:846
	0x03, 0x58, 0x0A, 0x05,  // 129:856
	0x03, 0x62, 0x0A, 0x05,  // 130:866
	0x03, 0x6C, 0x0A, 0x05,  // 131:876
	0x03, 0x76, 0x0A, 0x05,  // 132:886
	0x03, 0x80, 0x0A, 0x05,  // 133:896
	0x03, 0x8A, 0x0A, 0x05,  // 134:906
	0x03, 0x94, 0x0A, 0x05,  // 135:916
	0x03, 0x9E, 0x0A, 0x05,  // 136:926
	0x03, 0xA8, 0x0A, 0x05,  // 137:936
	0x03, 0xB2, 0x0A, 0x05,  // 138:946
	0x03, 0xBC, 0x0A, 0x05,  // 139:956
	0x03, 0xC6, 0x0A, 0x05,  // 140:966
	0x03, 0xD0, 0x0A, 0x05,  // 141:976
	0x03, 0xDA, 0x0A, 0x05,  // 142:986
	0x03, 0xE4, 0x0A, 0x05,  // 143:996
	0x03, 0xEE, 0x0A, 0x05,  // 144:1006
	0x03, 0xF8, 0x0A, 0x05,  // 145:1016
	0x04, 0x02, 0x0A, 0x05,  // 146:1026
	0x04, 0x0C, 0x0A, 0x05,  // 147:1036
	0x04, 0x16, 0x0A, 0x05,  // 148:1046
	0x04, 0x20, 0x0A, 0x05,  // 149:1056
	0x04, 0x2A, 0x0A, 0x05,  // 150:1066
	0x04, 0x34, 0x0A, 0x05,  // 151:1076
	0x04, 0x3E, 0x0A, 0x05,  // 152:1086
	0x04, 0x48, 0x0A, 0x05,  // 153:1096
	0x04, 0x52, 0x0A, 0x05,  // 154:1106
	0x04, 0x5C, 0x0A, 0x05,  // 155:1116
	0x04, 0x66, 0x0A, 0x05,  // 156:1126
	0x04, 0x70, 0x0A, 0x05,  // 157:1136
	0x04, 0x7A, 0x0A, 0x05,  // 158:1146
	0x04, 0x84, 0x0A, 0x05,  // 159:1156
	0xFF, 0xFF, 0x00, 0x05,  // 160:65535
	0x04, 0x8E, 0x06, 0x05,  // 161:1166
	0x04, 0x94, 0x0A, 0x05,  // 162:1172
	0x04, 0x9E, 0x0A, 0x05,  // 163:1182
	0x04, 0xA8, 0x09, 0x05,  // 164:1192
	0x04, 0xB1, 0x09, 0x05,  // 165:1201
	0x04, 0xBA, 0x06, 0x05,  // 166:1210
	0x04, 0xC0, 0x09, 0x05,  // 167:1216
	0x04, 0xC9, 0x07, 0x05,  // 168:1225
	0x04, 0xD0, 0x0A, 0x05,  // 169:1232
	0x04, 0xDA, 0x07, 0x05,  // 170:1242
	0x04, 0xE1, 0x09, 0x05,  // 171:1249
	0x04, 0xEA, 0x09, 0x05,  // 172:1258
	0x04, 0xF3, 0x07, 0x05,  // 173:1267
	0x04, 0xFA, 0x0A, 0x05,  // 174:1274
	0x05, 0x04, 0x07, 0x05,  // 175:1284
	0x05, 0x0B, 0x07, 0x05,  // 176:1291
	0x05, 0x12, 0x0A, 0x05,  // 177:1298
	0x05, 0x1C, 0x07, 0x05,  // 178:1308
	0x05, 0x23, 0x07, 0x05,  // 179:1315
	0x05, 0x2A, 0x07, 0x05,  // 180:1322
	0x05, 0x31, 0x0A, 0x05,  // 181:1329
	0x05, 0x3B, 0x0A, 0x05,  // 182:1339
	0x05, 0x45, 0x05, 0x05,  // 183:1349
	0x05, 0x4A, 0x08, 0x05,  // 184:1354
	0x05, 0x52, 0x07, 0x05,  // 185:1362
	0x05, 0x59, 0x07, 0x05,  // 186:1369
	0x05, 0x60, 0x09, 0x05,  // 187:1376
	0x05, 0x69, 0x0A, 0x05,  // 188:1385
	0x05, 0x73, 0x0A, 0x05,  // 189:1395
	0x05, 0x7D, 0x0A, 0x05,  // 190:1405
	0x05, 0x87, 0x08, 0x05,  // 191:1415
	0x05, 0x8F, 0x0A, 0x05,  // 192:1423
	0x05, 0x99, 0x0A, 0x05,  // 193:1433
	0x05, 0xA3, 0x0A, 0x05,  // 194:1443
	0x05, 0xAD, 0x0A, 0x05,  // 195:1453
	0x05, 0xB7, 0x0A, 0x05,  // 196:1463
	0x05, 0xC1, 0x0A, 0x05,  // 197:1473
	0x05, 0xCB, 0x0A, 0x05,  // 198:1483
	0x05, 0xD5, 0x0A, 0x05,  // 199:1493
	0x05, 0xDF, 0x0A, 0x05,  // 200:1503
	0x05, 0xE9, 0x0A, 0x05,  // 201:1513
	0x05, 0xF3, 0x0A, 0x05,  // 202:1523
	0x05, 0xFD, 0x0A, 0x05,  // 203:1533
	0x06, 0x07, 0x08, 0x05,  // 204:1543
	0x06, 0x0F, 0x08, 0x05,  // 205:1551
	0x06, 0x17, 0x08, 0x05,  // 206:1559
	0x06, 0x1F, 0x08, 0x05,  // 207:1567
	0x06, 0x27, 0x09, 0x05,  // 208:1575
	0x06, 0x30, 0x0A, 0x05,  // 209:1584
	0x06, 0x3A, 0x09, 0x05,  // 210:1594
	0x06, 0x43, 0x09, 0x05,  // 211:1603
	0x06, 0x4C, 0x09, 0x05,  // 212:1612
	0x06, 0x55, 0x09, 0x05,  // 213:1621
	0x06, 0x5E, 0x09, 0x05,  // 214:1630
	0x06, 0x67, 0x09, 0x05,  // 215:1639
	0x06, 0x70, 0x09, 0x05,  // 216:1648
	0x06, 0x79, 0x09, 0x05,  // 217:1657
	0x06, 0x82, 0x09, 0x05,  // 218:1666
	0x06, 0x8B, 0x09, 0x05,  // 219:1675
	0x06, 0x94, 0x09, 0x05,  // 220:1684
	0x06, 0x9D, 0x09, 0x05,  // 221:1693
	0x06, 0xA6, 0x09, 0x05,  // 222:1702
	0x06, 0xAF, 0x0A, 0x05,  // 223:1711
	0x06, 0xB9, 0x0A, 0x05,  // 224:1721
	0x06, 0xC3, 0x0A, 0x05,  // 225:1731
	0x06, 0xCD, 0x0A, 0x05,  // 226:1741
	0x06, 0xD7, 0x0A, 0x05,  // 227:1751
	0x06, 0xE1, 0x0A, 0x05,  // 228:1761
	0x06, 0xEB, 0x0A, 0x05,  // 229:1771
	0x06, 0xF5, 0x0A, 0x05,  // 230:1781
	0x06, 0xFF, 0x09, 0x05,  // 231:1791
	0x07, 0x08, 0x0A, 0x05,  // 232:1800
	0x07, 0x12, 0x0A, 0x05,  // 233:1810
	0x07, 0x1C, 0x0A, 0x05,  // 234:1820
	0x07, 0x26, 0x0A, 0x05,  // 235:1830
	0x07, 0x30, 0x0A, 0x05,  // 236:1840
	0x07, 0x3A, 0x0A, 0x05,  // 237:1850
	0x07, 0x44, 0x0A, 0x05,  // 238:1860
	0x07, 0x4E, 0x0A, 0x05,  // 239:1870
	0x07, 0x58, 0x09, 0x05,  // 240:1880
	0x07, 0x61, 0x0A, 0x05,  // 241:1889
	0x07, 0x6B, 0x09, 0x05,  // 242:1899
	0x07, 0x74, 0x09, 0x05,  // 243:1908
	0x07, 0x7D, 0x09, 0x05,  // 244:1917
	0x07, 0x86, 0x09, 0x05,  // 245:1926
	0x07, 0x8F, 0x09, 0x05,  // 246:1935
	0x07, 0x98, 0x09, 0x05,  // 247:1944
	0x07, 0xA1, 0x09, 0x05,  // 248:1953
	0x07, 0xAA, 0x0A, 0x05,  // 249:1962
	0x07, 0xB4, 0x0A, 0x05,  // 250:1972
	0x07, 0xBE, 0x0A, 0x05,  // 251:1982
	0x07, 0xC8, 0x0A, 0x05,  // 252:1992
	0x07, 0xD2, 0x09, 0x05,  // 253:2002
	0x07, 0xDB, 0x09, 0x05,  // 254:2011
	0x07, 0xE4, 0x09, 0x05,  // 255:2020

	// Font Data:
	0x00,0x00,0x00,0x00,0x3C,0x01,	// 33
	0x00,0x00,0x0C,0x00,0x00,0x00,0x0C,	// 34
	0x40,0x00,0xF0,0x01,0x5C,0x01,0xF8,0x00,0x54,	// 35
	0x00,0x00,0x38,0x01,0x28,0x01,0xFC,0x03,0xC0,0x01,	// 36
	0x00,0x00,0x38,0x00,0x68,0x00,0xF8,0x01,0x60,0x01,	// 37
	0x00,0x00,0xC0,0x00,0x3C,0x01,0x64,0x01,0x80,	// 38
	0x00,0x00,0x00,0x00,0x0C,	// 39
	0x00,0x00,0x00,0x00,0xF8,0x01,0x04,0x02,	// 40
	0x00,0x00,0x00,0x00,0x0C,0x03,0xF0,	// 41
	0x00,0x00,0x18,0x00,0x3C,0x00,0x18,	// 42
	0x40,0x00,0x40,0x00,0xE0,0x01,0x40,0x00,0x40,	// 43
	0x00,0x00,0x00,0x00,0x00,0x03,	// 44
	0x00,0x00,0x00,0x00,0x40,0x00,0x40,	// 45
	0x00,0x00,0x00,0x00,0x00,0x01,	// 46
	0x00,0x02,0x80,0x01,0x60,0x00,0x18,0x00,0x04,	// 47
	0x00,0x00,0xF8,0x00,0x24,0x01,0x04,0x01,0xF8,	// 48
	0x00,0x00,0x00,0x00,0x04,0x01,0xFC,0x01,0x00,0x01,	// 49
	0x00,0x00,0x84,0x01,0x44,0x01,0x24,0x01,0x18,0x01,	// 50
	0x00,0x00,0x04,0x01,0x24,0x01,0x24,0x01,0xD8,	// 51
	0x00,0x00,0xC0,0x00,0xB0,0x00,0x88,0x00,0xFC,0x01,	// 52
	0x00,0x00,0x1C,0x01,0x14,0x01,0x14,0x01,0xE0,	// 53
	0x00,0x00,0xF8,0x00,0x14,0x01,0x14,0x01,0xE0,	// 54
	0x00,0x00,0x04,0x00,0x84,0x01,0x74,0x00,0x0C,	// 55
	0x00,0x00,0xD8,0x00,0x24,0x01,0x24,0x01,0xD8,	// 56
	0x00,0x00,0x38,0x00,0x44,0x01,0x44,0x01,0xF8,	// 57
	0x00,0x00,0x00,0x00,0x20,0x01,	// 58
	0x00,0x00,0x00,0x00,0x10,0x03,	// 59
	0x00,0x00,0x40,0x00,0x60,0x00,0xA0,0x00,0x90,	// 60
	0xA0,0x00,0xA0,0x00,0xA0,0x00,0xA0,0x00,0xA0,	// 61
	0x00,0x00,0x90,0x00,0xA0,0x00,0xA0,0x00,0x60,	// 62
	0x00,0x00,0x04,0x00,0x64,0x01,0x1C,	// 63
	0x00,0x00,0xE0,0x01,0x18,0x06,0xE8,0x05,0x28,0x05,	// 64
	0x80,0x01,0x70,0x00,0x4C,0x00,0x78,0x00,0xC0,0x01,	// 65
	0x00,0x00,0xFC,0x01,0x24,0x01,0x24,0x01,0xD8,	// 66
	0x00,0x00,0xF8,0x00,0x8C,0x01,0x04,0x01,0x04,0x01,	// 67
	0x00,0x00,0xFC,0x01,0x04,0x01,0x04,0x01,0xF8,	// 68
	0x00,0x00,0xFC,0x01,0x24,0x01,0x24,0x01,0x24,0x01,	// 69
	0x00,0x00,0xFC,0x01,0x24,0x00,0x24,0x00,0x24,	// 70
	0x00,0x00,0xF8,0x00,0x04,0x01,0x24,0x01,0xE4,0x01,	// 71
	0x00,0x00,0xFC,0x01,0x20,0x00,0x20,0x00,0xFC,0x01,	// 72
	0x00,0x00,0x04,0x01,0xFC,0x01,0x04,0x01,	// 73
	0x00,0x01,0x04,0x01,0x04,0x01,0xFC,	// 74
	0x00,0x00,0xFC,0x01,0x20,0x00,0x78,0x00,0x84,0x01,	// 75
	0x00,0x00,0xFC,0x01,0x00,0x01,0x00,0x01,0x00,0x01,	// 76
	0x00,0x00,0xFC,0x01,0x3C,0x00,0x60,0x00,0x1C,	// 77
	0x00,0x00,0xFC,0x01,0x38,0x00,0xC0,0x00,0xFC,0x01,	// 78
	0x00,0x00,0xF8,0x00,0x04,0x01,0x04,0x01,0xF8,	// 79
	0x00,0x00,0xFC,0x01,0x44,0x00,0x44,0x00,0x38,	// 80
	0x00,0x00,0xF8,0x00,0x04,0x01,0x04,0x01,0xF8,0x02,	// 81
	0x00,0x00,0xFC,0x01,0x24,0x00,0x24,0x00,0xD8,0x01,	// 82
	0x00,0x00,0x18,0x01,0x24,0x01,0x24,0x01,0xC4,	// 83
	0x04,0x00,0x04,0x00,0xFC,0x01,0x04,0x00,0x04,	// 84
	0x00,0x00,0xFC,0x00,0x00,0x01,0x00,0x01,0xFC,	// 85
	0x04,0x00,0x78,0x00,0x80,0x01,0xF0,0x00,0x0C,	// 86
	0xFC,0x00,0xC0,0x01,0x30,0x00,0xC0,0x01,0xFC,	// 87
	0x00,0x01,0xCC,0x00,0x30,0x00,0xD8,0x00,0x04,0x01,	// 88
	0x04,0x00,0x18,0x00,0xE0,0x01,0x18,0x00,0x04,	// 89
	0x00,0x00,0x84,0x01,0x44,0x01,0x34,0x01,0x0C,0x01,	// 90
	0x00,0x00,0x00,0x00,0xFC,0x07,0x04,0x04,	// 91
	0x00,0x00,0x1C,0x00,0x60,0x00,0x80,0x01,0x00,0x02,	// 92
	0x00,0x00,0x00,0x00,0x04,0x04,0xFC,0x07,	// 93
	0x10,0x00,0x08,0x00,0x04,0x00,0x0C,0x00,0x10,	// 94
	0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,	// 95
	0x00,0x00,0x02,0x00,0x04,	// 96
	0x00,0x00,0xD0,0x01,0x50,0x01,0x50,0x01,0xE0,0x01,	// 97
	0x00,0x00,0xFC,0x01,0x10,0x01,0x10,0x01,0xE0,	// 98
	0x00,0x00,0xE0,0x00,0x10,0x01,0x10,0x01,0x10,0x01,	// 99
	0x00,0x00,0xE0,0x00,0x10,0x01,0x10,0x01,0xFC,0x01,	// 100
	0x00,0x00,0xE0,0x00,0x50,0x01,0x50,0x01,0x60,0x01,	// 101
	0x00,0x00,0x10,0x00,0xFC,0x01,0x14,0x00,0x14,	// 102
	0x00,0x00,0xE0,0x00,0x10,0x05,0x10,0x05,0xF0,0x03,	// 103
	0x00,0x00,0xFC,0x01,0x10,0x00,0x10,0x00,0xF0,0x01,	// 104
	0x00,0x01,0x10,0x01,0xF4,0x01,0x00,0x01,0x00,0x01,	// 105
	0x00,0x00,0x00,0x04,0x10,0x04,0xF4,0x07,	// 106
	0x00,0x00,0xFC,0x01,0x40,0x00,0xE0,0x00,0x10,0x01,	// 107
	0x00,0x00,0x04,0x00,0xFC,0x01,0x00,0x01,0x00,0x01,	// 108
	0x00,0x00,0xF0,0x01,0x10,0x00,0xF0,0x01,0x10,	// 109
	0x00,0x00,0xF0,0x01,0x10,0x00,0x10,0x00,0xF0,0x01,	// 110
	0x00,0x00,0xE0,0x00,0x10,0x01,0x10,0x01,0xE0,	// 111
	0x00,0x00,0xF0,0x07,0x10,0x01,0x10,0x01,0xE0,	// 112
	0x00,0x00,0xE0,0x00,0x10,0x01,0x10,0x01,0xF0,0x07,	// 113
	0x00,0x00,0x00,0x00,0xF0,0x01,0x10,0x00,0x10,	// 114
	0x00,0x00,0x30,0x01,0x50,0x01,0x50,0x01,0x90,0x01,	// 115
	0x00,0x00,0x10,0x00,0xFC,0x01,0x10,0x01,0x10,0x01,	// 116
	0x00,0x00,0xF0,0x01,0x00,0x01,0x00,0x01,0xF0,0x01,	// 117
	0x10,0x00,0xE0,0x00,0x00,0x01,0xE0,0x00,0x10,	// 118
	0x70,0x00,0x80,0x01,0x60,0x00,0x80,0x01,0xF0,	// 119
	0x00,0x00,0xB0,0x01,0x40,0x00,0xA0,0x00,0x10,0x01,	// 120
	0x00,0x00,0x70,0x04,0x80,0x07,0xC0,0x00,0x30,	// 121
	0x00,0x00,0x90,0x01,0x50,0x01,0x30,0x01,0x10,0x01,	// 122
	0x00,0x00,0x40,0x00,0xBC,0x07,0x04,0x04,	// 123
	0x00,0x00,0x00,0x00,0xFC,0x07,	// 124
	0x00,0x00,0x04,0x04,0xBC,0x07,0x40,	// 125
	0x40,0x00,0x40,0x00,0x40,0x00,0x40,0x00,0x40,	// 126
	0xFC,0x07,0x04,0x04,0x04,0x04,0x04,0x04,0xFC,0x07,	// 127
	0xFC,0x07,0x04,0x04,0x04,0x04,0x04,0x04,0xFC,0x07,	// 128
	0xFC,0x07,0x04,0x04,0x04,0x04,0x04,0x04,0xFC,0x07,	// 129
	0xFC,0x07,0x04,0x04,0x04,0x04,0x04,0x04,0xFC,0x07,	// 130
	0xFC,0x07,0x04,0x04,0x04,0x04,0x04,0x04,0xFC,0x07,	// 131
	0xFC,0x07,0x04,0x04,0x04,0x04,0x04,0x04,0xFC,0x07,	// 132
	0xFC,0x07,0x04,0x04,0x04,0x04,0x04,0x04,0xFC,0x07,	// 133
	0xFC,0x07,0x04,0x04,0x04,0x04,0x04,0x04,0xFC,0x07,	// 134
	0xFC,0x07,0x04,0x04,0x04,0x04,0x04,0x04,0xFC,0x07,	// 135
	0xFC,0x07,0x04,0x04,0x04,0x04,0x04,0x04,0xFC,0x07,	// 136
	0xFC,0x07,0x04,0x04,0x04,0x04,0x04,0x04,0xFC,0x07,	// 137
	0xFC,0x07,0x04,0x04,0x04,0x04,0x04,0x04,0xFC,0x07,	// 138
	0xFC,0x07,0x04,0x04,0x04,0x04,0x04,0x04,0xFC,0x07,	// 139
	0xFC,0x07,0x04,0x04,0x04,0x04,0x04,0x04,0xFC,0x07,	// 140
	0xFC,0x07,0x04,0x04,0x04,0x04,0x04,0x04,0xFC,0x07,	// 141
	0xFC,0x07,0x04,0x04,0x04,0x04,0x04,0x04,0xFC,0x07,	// 142
	0xFC,0x07,0x04,0x04,0x04,0x04,0x04,0x04,0xFC,0x07,	// 143
	0xFC,0x07,0x04,0x04,0x04,0x04,0x04,0x04,0xFC,0x07,	// 144
	0xFC,0x07,0x04,0x04,0x04,0x04,0x04,0x04,0xFC,0x07,	// 145
	0xFC,0x07,0x04,0x04,0x04,0x04,0x04,0x04,0xFC,0x07,	// 146
	0xFC,0x07,0x04,0x04,0x04,0x04,0x04,0x04,0xFC,0x07,	// 147
	0xFC,0x07,0x04,0x04,0x04,0x04,0x04,0x04,0xFC,0x07,	// 148
	0xFC,0x07,0x04,0x04,0x04,0x04,0x04,0x04,0xFC,0x07,	// 149
	0xFC,0x07,0x04,0x04,0x04,0x04,0x04,0x04,0xFC,0x07,	// 150
	0xFC,0x07,0x04,0x04,0x04,0x04,0x04,0x04,0xFC,0x07,	// 151
	0xFC,0x07,0x04,0x04,0x04,0x04,0x04,0x04,0xFC,0x07,	// 152
	0xFC,0x07,0x04,0x04,0x04,0x04,0x04,0x04,0xFC,0x07,	// 153
	0xFC,0x07,0x04,0x04,0x04,0x04,0x04,0x04,0xFC,0x07,	// 154
	0xFC,0x07,0x04,0x04,0x04,0x04,0x04,0x04,0xFC,0x07,	// 155
	0xFC,0x07,0x04,0x04,0x04,0x04,0x04,0x04,0xFC,0x07,	// 156
	0xFC,0x07,0x04,0x04,0x04,0x04,0x04,0x04,0xFC,0x07,	// 157
	0xFC,0x07,0x04,0x04,0x04,0x04,0x04,0x04,0xFC,0x07,	// 158
	0xFC,0x07,0x04,0x04,0x04,0x04,0x04,0x04,0xFC,0x07,	// 159
	0x00,0x00,0x00,0x00,0xE4,0x01,	// 161
	0x00,0x00,0xE0,0x00,0x10,0x01,0xF8,0x03,0x10,0x01,	// 162
	0x00,0x00,0x20,0x01,0xF8,0x01,0x24,0x01,0x24,0x01,	// 163
	0x00,0x00,0xE0,0x00,0xA0,0x00,0xA0,0x00,0xE0,	// 164
	0x6C,0x00,0x70,0x00,0xC0,0x01,0x78,0x00,0x64,	// 165
	0x00,0x00,0x00,0x00,0x38,0x07,	// 166
	0x00,0x00,0x6C,0x02,0x94,0x02,0xA4,0x03,0x60,	// 167
	0x00,0x00,0x04,0x00,0x00,0x00,0x04,	// 168
	0xF0,0x00,0xF8,0x01,0x98,0x01,0x98,0x01,0x98,0x01,	// 169
	0x00,0x00,0x74,0x00,0x74,0x00,0x7C,	// 170
	0x00,0x00,0x40,0x00,0xA0,0x00,0x40,0x00,0xA0,	// 171
	0x20,0x00,0x20,0x00,0x20,0x00,0x20,0x00,0xE0,	// 172
	0x00,0x00,0x00,0x00,0x40,0x00,0x40,	// 173
	0xF0,0x00,0xF8,0x01,0x58,0x01,0xB8,0x01,0x98,0x01,	// 174
	0x00,0x00,0x04,0x00,0x04,0x00,0x04,	// 175
	0x00,0x00,0x1C,0x00,0x14,0x00,0x1C,	// 176
	0x20,0x01,0x20,0x01,0x70,0x01,0x20,0x01,0x20,0x01,	// 177
	0x00,0x00,0x00,0x00,0x34,0x00,0x2C,	// 178
	0x00,0x00,0x44,0x00,0x54,0x00,0x6C,	// 179
	0x00,0x00,0x00,0x00,0x04,0x00,0x02,	// 180
	0x00,0x00,0xF0,0x07,0x00,0x01,0x00,0x01,0xF0,0x01,	// 181
	0x00,0x00,0x38,0x00,0x3C,0x00,0xFC,0x03,0xFC,0x03,	// 182
	0x00,0x00,0x00,0x00,0x20,	// 183
	0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x06,	// 184
	0x00,0x00,0x24,0x00,0x3C,0x00,0x20,	// 185
	0x00,0x00,0x7C,0x00,0x64,0x00,0x7C,	// 186
	0x00,0x00,0xA0,0x00,0x40,0x00,0xA0,0x00,0x40,	// 187
	0x50,0x00,0x5E,0x00,0xB0,0x01,0xA0,0x03,0x00,0x01,	// 188
	0x50,0x00,0x5E,0x00,0x70,0x03,0xE0,0x02,0x00,0x02,	// 189
	0x62,0x00,0x7E,0x01,0xC0,0x01,0xC0,0x03,0x20,0x01,	// 190
	0x00,0x00,0xC0,0x01,0x34,0x01,0x00,0x01,	// 191
	0x80,0x01,0x70,0x00,0x4E,0x00,0x78,0x00,0xC0,0x01,	// 192
	0x80,0x01,0x70,0x00,0x4E,0x00,0x79,0x00,0xC0,0x01,	// 193
	0x80,0x01,0x72,0x00,0x4D,0x00,0x7A,0x00,0xC0,0x01,	// 194
	0x80,0x01,0x72,0x00,0x4E,0x00,0x7A,0x00,0xC0,0x01,	// 195
	0x80,0x01,0x72,0x00,0x4C,0x00,0x7A,0x00,0xC0,0x01,	// 196
	0xE2,0x01,0x5D,0x00,0x4F,0x00,0xF0,0x00,0x00,0x01,	// 197
	0x80,0x01,0x78,0x00,0x44,0x00,0xFC,0x01,0x24,0x01,	// 198
	0x00,0x00,0xF8,0x00,0x8C,0x01,0x84,0x07,0x84,0x01,	// 199
	0x00,0x00,0xFC,0x01,0x27,0x01,0x24,0x01,0x24,0x01,	// 200
	0x00,0x00,0xFC,0x01,0x26,0x01,0x25,0x01,0x24,0x01,	// 201
	0x00,0x00,0xFC,0x01,0x26,0x01,0x26,0x01,0x24,0x01,	// 202
	0x00,0x00,0xFC,0x01,0x26,0x01,0x26,0x01,0x24,0x01,	// 203
	0x00,0x00,0x05,0x01,0xFE,0x01,0x04,0x01,	// 204
	0x00,0x00,0x04,0x01,0xFE,0x01,0x05,0x01,	// 205
	0x00,0x00,0x06,0x01,0xFD,0x01,0x06,0x01,	// 206
	0x00,0x00,0x06,0x01,0xFC,0x01,0x06,0x01,	// 207
	0x20,0x00,0xFC,0x01,0x24,0x01,0x04,0x01,0xF8,	// 208
	0x00,0x00,0xFC,0x01,0x3A,0x00,0xC2,0x00,0xFC,0x01,	// 209
	0x00,0x00,0xF8,0x00,0x05,0x01,0x04,0x01,0xF8,	// 210
	0x00,0x00,0xF8,0x00,0x04,0x01,0x05,0x01,0xF8,	// 211
	0x00,0x00,0xF8,0x00,0x06,0x01,0x06,0x01,0xF8,	// 212
	0x00,0x00,0xFA,0x00,0x05,0x01,0x07,0x01,0xF8,	// 213
	0x00,0x00,0xF8,0x00,0x06,0x01,0x06,0x01,0xF8,	// 214
	0x00,0x00,0xB0,0x00,0x40,0x00,0xE0,0x00,0x90,	// 215
	0x00,0x01,0xF8,0x00,0x24,0x01,0x24,0x01,0xFC,	// 216
	0x00,0x00,0xFC,0x00,0x01,0x01,0x02,0x01,0xFC,	// 217
	0x00,0x00,0xFC,0x00,0x02,0x01,0x01,0x01,0xFC,	// 218
	0x00,0x00,0xFC,0x00,0x02,0x01,0x02,0x01,0xFC,	// 219
	0x00,0x00,0xFC,0x00,0x02,0x01,0x02,0x01,0xFC,	// 220
	0x04,0x00,0x18,0x00,0xE2,0x01,0x18,0x00,0x04,	// 221
	0x00,0x00,0xFC,0x01,0x90,0x00,0x90,0x00,0xF0,	// 222
	0x00,0x00,0xFC,0x01,0x34,0x01,0x4C,0x01,0xC0,0x01,	// 223
	0x00,0x00,0xD0,0x01,0x54,0x01,0x58,0x01,0xE0,0x01,	// 224
	0x00,0x00,0xD0,0x01,0x50,0x01,0x54,0x01,0xE0,0x01,	// 225
	0x00,0x00,0xD0,0x01,0x54,0x01,0x54,0x01,0xE0,0x01,	// 226
	0x00,0x00,0xD8,0x01,0x54,0x01,0x5C,0x01,0xE0,0x01,	// 227
	0x00,0x00,0xD0,0x01,0x54,0x01,0x54,0x01,0xE0,0x01,	// 228
	0x00,0x00,0xD0,0x01,0x5E,0x01,0x5E,0x01,0xE0,0x01,	// 229
	0x00,0x00,0xD0,0x01,0x50,0x01,0xE0,0x00,0x50,0x01,	// 230
	0x00,0x00,0xE0,0x00,0x90,0x05,0x90,0x07,0x90,	// 231
	0x00,0x00,0xE0,0x00,0x56,0x01,0x58,0x01,0x60,0x01,	// 232
	0x00,0x00,0xE0,0x00,0x50,0x01,0x56,0x01,0x60,0x01,	// 233
	0x00,0x00,0xE0,0x00,0x54,0x01,0x54,0x01,0x60,0x01,	// 234
	0x00,0x00,0xE0,0x00,0x54,0x01,0x54,0x01,0x60,0x01,	// 235
	0x00,0x01,0x14,0x01,0xF8,0x01,0x00,0x01,0x00,0x01,	// 236
	0x00,0x01,0x10,0x01,0xF4,0x01,0x00,0x01,0x00,0x01,	// 237
	0x00,0x01,0x18,0x01,0xF4,0x01,0x08,0x01,0x00,0x01,	// 238
	0x00,0x01,0x14,0x01,0xF0,0x01,0x04,0x01,0x00,0x01,	// 239
	0x00,0x00,0xE0,0x00,0x14,0x01,0x1C,0x01,0xE0,	// 240
	0x00,0x00,0xF8,0x01,0x14,0x00,0x1C,0x00,0xF0,0x01,	// 241
	0x00,0x00,0xE0,0x00,0x16,0x01,0x18,0x01,0xE0,	// 242
	0x00,0x00,0xE0,0x00,0x18,0x01,0x16,0x01,0xE0,	// 243
	0x00,0x00,0xE0,0x00,0x14,0x01,0x14,0x01,0xE0,	// 244
	0x00,0x00,0xE0,0x00,0x14,0x01,0x14,0x01,0xE0,	// 245
	0x00,0x00,0xE0,0x00,0x14,0x01,0x14,0x01,0xE0,	// 246
	0x40,0x00,0x40,0x00,0xD0,0x00,0x40,0x00,0x40,	// 247
	0x00,0x00,0xE0,0x01,0x50,0x01,0x50,0x01,0xF0,	// 248
	0x00,0x00,0xF0,0x01,0x04,0x01,0x08,0x01,0xF0,0x01,	// 249
	0x00,0x00,0xF0,0x01,0x08,0x01,0x04,0x01,0xF0,0x01,	// 250
	0x00,0x00,0xF0,0x01,0x04,0x01,0x04,0x01,0xF0,0x01,	// 251
	0x00,0x00,0xF0,0x01,0x04,0x01,0x04,0x01,0xF0,0x01,	// 252
	0x00,0x00,0x70,0x04,0x88,0x07,0xC4,0x00,0x30,	// 253
	0x00,0x00,0xFC,0x07,0x10,0x01,0x10,0x01,0xE0,	// 254
	0x00,0x00,0x74,0x04,0x80,0x07,0xC4,0x00,0x30	// 255
};
