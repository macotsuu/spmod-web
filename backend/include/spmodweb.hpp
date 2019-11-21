#pragma once

// POCO
#include <Poco/Net/HTTPServer.h>
#include <Poco/Net/HTTPRequestHandler.h>
#include <Poco/Net/HTTPRequestHandlerFactory.h>
#include <Poco/Net/HTTPServerRequest.h>
#include <Poco/Net/HTTPServerResponse.h>
#include <Poco/Net/ServerSocket.h>
#include <Poco/Net/HTTPServerParams.h>
#include <Poco/Util/ServerApplication.h>
#include <Poco/StringTokenizer.h>
#include <Poco/ThreadPool.h>

// SPModWeb
#include "BadRequestHandler.hpp"
#include "ApiRequestHandler.hpp"
#include "RequestHandlerFactory.hpp"
#include "WebServer.hpp"

//STL
#include <iostream>
#include <vector>
#include <string>