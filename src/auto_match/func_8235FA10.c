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
extern unsigned int *auStack_90;
extern int fn_82526C70();
extern int fn_82536070();
extern int fn_82536590();


void fn_8235FA10(int param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  undefined1 auStack_90 [128];
  
  if (((*(int *)(param_1 + 0x2b80) == 0) && (*(int *)(param_1 + 0x2b84) == 0)) || (param_3 != 0)) {
    if ((*(int *)(param_1 + 0xc0c) != 0) && (pcVar2 = param_2, *(int *)(param_1 + 0xcb8) != 0)) {
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      if ((int)pcVar2 - (int)param_2 == 1) {
        if (*(int *)(param_1 + 0x2b98) == 3) {
          param_2 = (char *)(param_1 + 0xf7c);
        }
        else if (*(int *)(param_1 + 0x2b98) == 4) {
          param_2 = (char *)(param_1 + 0xfbc);
        }
        else {
          param_2 = (char *)(param_1 + 0xf3c);
        }
      }
      fn_82526C70(auStack_90,0x80,0xffffffff821b26d0,param_1 + 0xebc,param_2);
      fn_82536070(param_1 + 0xe3c,auStack_90);
      fn_82536590(param_1 + 0xd6c,0);
    }
    *(undefined4 *)(param_1 + 0x2b80) = 1;
  }
  return;
}

