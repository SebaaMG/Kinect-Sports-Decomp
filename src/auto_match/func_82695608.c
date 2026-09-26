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
extern int fn_826951F0();
extern int fn_82695370();
extern unsigned int lbl_82005710;


bool fn_82695608(char *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  char cVar4;
  longlong lVar3;
  double adStack_10 [2];
  
  cVar4 = *param_1;
  if (cVar4 == '\x05') {
    if ((*(undefined4 **)(param_1 + 4))[4] == 0) {
      return false;
    }
    if (6 < *(byte *)(param_2 + 0x7c)) {
      return true;
    }
    cVar4 = fn_826951F0(adStack_10,**(undefined4 **)(param_1 + 4));
    if (cVar4 == '\0') {
      return false;
    }
  }
  else {
    if (cVar4 != '\x03') {
      if (cVar4 == '\x04') {
        iVar1 = *(int *)(param_1 + 8);
      }
      else {
        if (cVar4 == '\x02') {
          return (bool)param_1[4];
        }
        if (cVar4 != '\x06') {
          if (cVar4 == '\a') {
            lVar3 = fn_82695370();
            return lVar3 != 0;
          }
          if (cVar4 != '\b') {
            return cVar4 == '\v';
          }
        }
        iVar1 = *(int *)(param_1 + 4);
      }
      return iVar1 != 0;
    }
    adStack_10[0] = *(double *)(param_1 + 8);
  }
  if ((((ulonglong)adStack_10[0] & 0x7ff0000000000000) != 0x7ff0000000000000) ||
     (bVar2 = true, ((ulonglong)adStack_10[0] & 0xfffffffffffff) == 0)) {
    bVar2 = false;
  }
  if (bVar2) {
    return false;
  }
  return adStack_10[0] != lbl_82005710;
}

