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
extern unsigned int *auStack_48;
extern int fn_82E3BF28();
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern int fn_82F691F0();
extern unsigned int uStack_4c;


undefined8
fn_82E3CA68(longlong param_1,ulonglong param_2,undefined4 *param_3,ulonglong param_4,uint *param_5
             )

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uStack_4c;
  undefined1 auStack_48 [72];
  
  lVar2 = param_1 + 8;
  fn_82E50CB8(lVar2);
  if ((((param_2 & 0xffffffff) == 0) || (param_3 == (undefined4 *)0x0)) || (param_5 == (uint *)0x0))
  {
    fn_82E50F10(lVar2);
    uVar3 = 0xffffffff80070057;
  }
  else {
    if ((*param_5 == 0) || ((param_4 & 0xffffffff) != 0)) {
      *param_3 = 0;
      uStack_4c = 0;
      iVar1 = fn_82E3BF28(param_1 + 0x1ac,param_2,&uStack_4c,auStack_48);
      if (iVar1 == 0) {
        *param_3 = 0;
        uVar3 = 0;
        *param_5 = 0;
      }
      else {
        *param_3 = 1;
        if (0x5b < *param_5) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(param_4,0);
        }
        *param_5 = 0x5c;
        uVar3 = 0xffffffffc00d36b1;
      }
    }
    else {
      uVar3 = 0xffffffff80070057;
    }
    fn_82E50F10(lVar2);
  }
  return uVar3;
}

