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
extern int fn_82E4BC08();
extern int fn_82E9A160();
extern unsigned int uStack_30;


undefined8
fn_82E9A868(int param_1,undefined1 *param_2,uint *param_3,undefined8 param_4,uint param_5)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  uint uStack_30;
  int aiStack_2c [11];
  
  uVar1 = *(uint *)(param_1 + 0x3c);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 1;
  param_2[3] = 0xe;
  fn_82E4BC08(param_1,param_2 + 4,&uStack_30,(ulonglong)uVar1 - 1);
  uVar4 = uStack_30 + 4;
  if ((*(uint *)(param_1 + 0x58) < uStack_30 + 4) ||
     (((-(uint)((ulonglong)uVar1 == 0) & param_5) != 0 &&
      ((uStack_30 = uVar4,
       iVar3 = fn_82E9A160(param_1,param_2 + uVar4,*(uint *)(param_1 + 0x58) - uVar4,0x1e,
                             aiStack_2c), iVar3 != 0 ||
       (uVar4 = aiStack_2c[0] + uStack_30, *(uint *)(param_1 + 0x58) < uVar4)))))) {
    uVar2 = 0xffffffffffffff9c;
  }
  else {
    *param_3 = uVar4;
    uVar2 = 0;
  }
  return uVar2;
}

