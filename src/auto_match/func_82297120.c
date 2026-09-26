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
extern unsigned int *auStack_30;
extern int fn_82F85C08();
extern unsigned int uStack_2e;


undefined1 * fn_82297120(longlong param_1,undefined1 *param_2,undefined1 *param_3,int param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_30 [2];
  undefined2 uStack_2e;
  undefined4 auStack_2c [11];
  
  if (param_2 != param_3) {
    puVar3 = (undefined2 *)(param_4 + -2);
    do {
      auStack_30[0] = *param_2;
      auStack_2c[0] = 0;
      iVar1 = fn_82F85C08(&uStack_2e,auStack_30,1,auStack_2c,param_1 + 0x18);
      uVar2 = 0xffff;
      if (-1 < iVar1) {
        uVar2 = uStack_2e;
      }
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = uVar2;
    } while (param_2 != param_3);
  }
  return param_2;
}

