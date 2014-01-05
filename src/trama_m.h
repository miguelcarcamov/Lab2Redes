//
// Generated file, do not edit! Created by opp_msgc 4.3 from trama.msg.
//

#ifndef _TRAMA_M_H_
#define _TRAMA_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0403
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif



/**
 * Enum generated from <tt>trama.msg</tt> by opp_msgc.
 * <pre>
 * enum tipoPaquete{
 *     CONN = 0; 
 *     ACK = 1;	
 *     DATA = 2;	
 *     TOKEN = 3;	
 *     OK = 4;	
 *     MISMO=5;	
 * }
 * </pre>
 */
enum tipoPaquete {
    CONN = 0,
    ACK = 1,
    DATA = 2,
    TOKEN = 3,
    OK = 4,
    MISMO = 5
};

/**
 * Class generated from <tt>trama.msg</tt> by opp_msgc.
 * <pre>
 * packet Mensaje {
 *     int tipo @enum(tipoPaquete);
 *     int origen;
 *     int destino;
 *     string datos;
 *     int numeroDeTrama;
 *     int tramasTotal;
 * }
 * </pre>
 */
class Mensaje : public ::cPacket
{
  protected:
    int tipo_var;
    int origen_var;
    int destino_var;
    opp_string datos_var;
    int numeroDeTrama_var;
    int tramasTotal_var;

  private:
    void copy(const Mensaje& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Mensaje&);

  public:
    Mensaje(const char *name=NULL, int kind=0);
    Mensaje(const Mensaje& other);
    virtual ~Mensaje();
    Mensaje& operator=(const Mensaje& other);
    virtual Mensaje *dup() const {return new Mensaje(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getTipo() const;
    virtual void setTipo(int tipo);
    virtual int getOrigen() const;
    virtual void setOrigen(int origen);
    virtual int getDestino() const;
    virtual void setDestino(int destino);
    virtual const char * getDatos() const;
    virtual void setDatos(const char * datos);
    virtual int getNumeroDeTrama() const;
    virtual void setNumeroDeTrama(int numeroDeTrama);
    virtual int getTramasTotal() const;
    virtual void setTramasTotal(int tramasTotal);
};

inline void doPacking(cCommBuffer *b, Mensaje& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Mensaje& obj) {obj.parsimUnpack(b);}


#endif // _TRAMA_M_H_
