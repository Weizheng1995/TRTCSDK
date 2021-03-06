#ifndef _TXNETWORKPROXY_H_
#define _TXNETWORKPROXY_H_

#ifdef LITEAV_EXPORTS
#define LITEAV_API __declspec(dllexport)
#else
#define LITEAV_API __declspec(dllimport)
#endif

class LITEAV_API TXNetworkProxy
{
public:
    static TXNetworkProxy * getInstance();
    
    /**
    * \brief：设置透明代理，SDK通过此透明代理server转发到腾讯云
    * \param：ip  - 透明代理IP 
    * \return 无
    */
    void setProxy(const char * ip, unsigned short port);

	/**
	* \brief：单独设置数据上报透明代理，setProxy 包含此接口的调用，
	* \param：ip  - 透明代理IP
	* \return 无
	*/
	void setReportProxy(const char * ip, unsigned short port);
};

#endif /*_TXNETWORKPROXY_H_*/
