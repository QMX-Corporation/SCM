#ifndef PATH_H
#define PATH_H

/* Libs */
#include <stdint.h>
#include <string.h>

/* Basic Defines */
#define PATCHE_ERROR 1
#define PATCHE_SUCCESS 0
typedef char* string;

/* A Structure for Help 
  Functions */
typedef struct {
  /* Data Reuse Buffer */
  uint32_t pBuffer; 
  uint32_t* pControl; /* Controller of Buffers */
  /* 0 is desactived, 1 is actived, 
    0 = No Patches, 1 = Patche send-email (git)
  */
  uint64_t Flags; 
  /* Used for Addresses of Buffer (0x01..0x02 etc) */
  uint16_t bAddress;
} __attribute__((aligned(4096), packed)) git_buffer_pixel_send;

/* Global Reference of Structure */
extern git_buffer_pixel_send gBufferPSend;

/* --- Functions --- */
/* Request a Help-Send for Update Repositories */
string RequestHelpSend(string https, uint32_t dest, uint32_t rement);
/* Send a Help-HTTP for change Updates */
void SendHelpHTTP(string https, int nUpdates);


/* Notes:
 * Is Recomended store the Result of RequestHelpSend() 
 * in a Variable, and pass this Variable in 
 * 1° Argument of SendHelpHTTP(string https),
 * why the RequestHelpSend() return the Link HTTPS 
*/

#endif