#pragma once

/*   		 DataBase Define	  	    */
#define DBHOST "tcp://192.168.89.129:3306"
#define USER "root"
#define PASSWORD ""
#define DATABASE "cloudsris"

#define REDIS_HOST "192.168.89.129"

/*
			FILE SYSTEM CONFIG
*/
#define BLOCK_SIZE 536870912
#define PATH_TO_BLOCK "/home/vfs/NetBeansProjects/CloudsRis/blockWareHouse/"



/**
 * PORTS for listen 
**/
//@doto: вроде не испоьзуется
#define PORT_LISTEN 45788
//@doto: вроде не испоьзуется
#define PORT_LISTEN_UDP 45796
#define PORT_BROATCAST 45782


/**
 * Максимальное количество ошибок при поиске
 * порта дял UDP
 */
#define MAX_CONNECTION_ERROR_PORT 100

/**
 * Время ожидание ответов по udp от серверов
 * в сек
 */
#define WAITING_RESPONSE_TIME_UDP 3

/**
 * На сколкьо серваков делать бекап
 */
#define COUNT_SERVER_BACKUP 3

//   Network
#define BUFFER_SIZE 8192
#define TCP_PORT_SERVER 6454
#define SELF_IP "192.168.89.128"
#define HEADER_TCP_LENGTH 136
#define ERROR_TCP_SOCKET 11
#define TCP_SOCKET_OK 1
