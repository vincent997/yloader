/*
Copyright(C) 2017  YLoader.com

This program is free software : you can redistribute it and / or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.If not, see <http://www.gnu.org/licenses/>.
*/

#define STR_EXPAND(tok) #tok
#define STR(tok) STR_EXPAND(tok)

#define FILEVER 5,0,1,9
#define PRODUCTVER FILEVER
#define STRCOMPANYNAME "YLoader"
#define STRPRODUCTNAME STRCOMPANYNAME
#define STRPRODUCTVER STR(PRODUCTVER)
#define STRFILEVER STRPRODUCTVER
#define WSTRPRODUCTVER _T(STRPRODUCTVER)
#define STRCOPYRIGHT "Copyright � 2017 YLoader"
#define STRPRODUCT_DESC "Historical Quotes Downloader"
#define STRPRODUCT_VER _T(STRFILEVER)
#define STRPRODUCT_NAME _T(STRCOMPANYNAME)
#define YLOADER_URL L"http://www.yloader.com"
#define LANG _T( "en_us")
#define VERSION_QUERY_ARGS _T("version=") WSTRPRODUCTVER _T("&lang=") LANG
