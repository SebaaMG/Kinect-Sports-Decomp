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
extern int fn_8289F478();
extern int fn_828AA3B0();
extern int fn_828B2848();
extern int fn_828B2BF8();
extern int fn_828C4240();


void fn_828AA8F8(int *param_1)

{
  int iVar2;
  char cVar3;
  undefined8 uVar1;
  
  iVar2 = (**(code **)(*param_1 + 4))();
  cVar3 = (**(code **)(*(int *)(iVar2 + 0x1ec) + 0x3c))();
  if (cVar3 == '\0') {
    cVar3 = fn_828C4240(param_1[4]);
    if (cVar3 == '\0') {
      uVar1 = fn_828B2BF8();
      fn_828B2848(uVar1,param_1);
    }
    iVar2 = (**(code **)(*param_1 + 4))(param_1);
    uVar1 = (**(code **)(*(int *)(iVar2 + 0x198) + 0x3c))();
    fn_828AA3B0(param_1[4],param_1,uVar1);
    fn_8289F478(*(undefined4 *)(param_1[0xd] + 0x38),param_1);
  }
  return;
}

