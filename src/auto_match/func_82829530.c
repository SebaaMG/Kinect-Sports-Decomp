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
extern unsigned int *auStack_2c;
extern int fn_82827DB8();
extern int fn_82829338();
extern unsigned int uStack_30;


uint * fn_82829530(uint *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  uint *puVar2;
  uint uStack_30;
  uint auStack_2c [11];
  
  uStack_30 = fn_82829338(param_2,param_3);
  if ((uStack_30 == *(uint *)(param_2 + 4)) ||
     (cVar1 = fn_82827DB8(param_2,*param_3,*(undefined4 *)(uStack_30 + 0xc)), cVar1 != '\0')) {
    puVar2 = auStack_2c;
    auStack_2c[0] = *(uint *)(param_2 + 4);
  }
  else {
    puVar2 = &uStack_30;
  }
  *param_1 = *puVar2;
  return param_1;
}

