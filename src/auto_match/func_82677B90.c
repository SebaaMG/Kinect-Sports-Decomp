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
extern int fn_82631830();
extern int fn_828F0DD0();


undefined8 fn_82677B90(undefined8 param_1,int *param_2,char *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int *apiStack_20 [4];
  
  if (*param_2 != 0) {
    return 1;
  }
  apiStack_20[0] = (int *)0x0;
  pcVar4 = param_3;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  iVar3 = fn_828F0DD0(param_3,pcVar4 + (-1 - (int)param_3),0,0,0xffffffff821bbc7c,
                            0xffffffff8200532c,1,apiStack_20);
  bVar1 = apiStack_20[0] == (int *)0x0;
  if (-1 < iVar3) {
    if (bVar1) {
      return 0;
    }
    (**(code **)(*apiStack_20[0] + 0xc))();
    iVar3 = fn_82631830();
    *param_2 = iVar3;
    bVar1 = apiStack_20[0] == (int *)0x0;
    if (iVar3 != 0) {
      if (bVar1) {
        return 1;
      }
      (**(code **)(*apiStack_20[0] + 8))();
      return 1;
    }
  }
  if (!bVar1) {
    (**(code **)(*apiStack_20[0] + 8))();
  }
  return 0;
}

