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
extern unsigned int *auStack_70;
extern int fn_824E00B8();
extern int fn_82F50DA8();
extern int fn_82F6A548();
extern int fn_82F6A594();


void fn_824DCBE8(undefined8 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_70 [112];
  
  puVar1 = (undefined4 *)fn_82F6A548();
  iVar2 = (**(code **)(*(int *)param_2 + 4))(param_2);
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*(int *)param_2 + 4))(param_2);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = fn_824E00B8(param_2);
    }
    puVar1[0x15] = uVar3;
                    /* WARNING: Subroutine does not return */
    fn_82F50DA8(auStack_70,param_2,10,1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  fn_82F6A594();
  return;
}

