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
extern int fn_82516F48();
extern int fn_825170B8();
extern int fn_8265C9E0();
extern int fn_8288B760();
extern int fn_82897FE8();
extern unsigned int lbl_821C27D0;


void fn_825166A0(int *param_1)

{
  char cVar4;
  undefined4 *puVar2;
  longlong lVar1;
  int iVar3;
  
  cVar4 = fn_8288B760();
  if (cVar4 == '\0') {
    iVar3 = (**(code **)(*param_1 + 8))(param_1);
    lVar1 = (**(code **)(*(int *)(iVar3 + 0x48) + 0x3c))();
    if (lVar1 != 0) {
      fn_825170B8(param_1 + 0x1a,lVar1 + 8);
      fn_825170B8(param_1 + 0x1e,lVar1 + 0x18);
    }
  }
  else {
    puVar2 = (undefined4 *)fn_8265C9E0(0x28);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2[1] = 1;
      *puVar2 = &lbl_821C27D0;
      fn_82516F48(puVar2 + 2,param_1 + 0x1a);
      fn_82516F48(puVar2 + 6,param_1 + 0x1e);
    }
    lVar1 = (**(code **)(*param_1 + 8))(param_1);
    fn_82897FE8(lVar1 + 0x48,puVar2);
  }
  return;
}

