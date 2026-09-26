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
extern int fn_8251F718();
extern int fn_825200A8();
extern int fn_82835208();
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82674930(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  iVar2 = *(int *)(param_1 + 0x28);
  while( true ) {
    if (iVar2 == *(int *)(param_1 + 0x2c)) {
      uStack_40 = *param_2;
      uStack_38 = 1;
      uStack_3c = fn_8251F718(param_2);
      fn_82835208(param_1 + 0x28,&uStack_40);
      return;
    }
    iVar1 = fn_825200A8(param_2,iVar2);
    if (iVar1 != 0) break;
    iVar2 = iVar2 + 0xc;
  }
  *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
  return;
}

