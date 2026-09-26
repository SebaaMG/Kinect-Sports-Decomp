typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern int fn_8267B890();
extern int fn_82F664B0();
extern unsigned int lbl_82015068;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831E7E64;


undefined4 * fn_8276DF08(undefined4 *param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  char *pcVar4;
  
  param_1[5] = param_3;
  param_1[6] = 0;
  uVar2 = lbl_821AAD20;
  param_1[1] = 1;
  param_1[2] = uVar2;
  *param_1 = &lbl_82015068;
  param_1[3] = uVar2;
  param_1[4] = uVar2;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  pcVar4 = param_2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar3 = fn_8267B890(lbl_831E7E64,(int)pcVar4 - (int)param_2,0);
  param_1[6] = (int)uVar3;
  pcVar4 = param_2;
  if ((uVar3 & 0xffffffff) != 0) {
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    fn_82F664B0(uVar3,(int)pcVar4 - (int)param_2,param_2);
  }
  param_1[5] = param_1[5] | 0x2000;
  return param_1;
}

