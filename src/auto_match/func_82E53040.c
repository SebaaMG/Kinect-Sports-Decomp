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
extern int fn_82E4FE08();
extern int fn_82E50F00();
extern int fn_82E51028();
extern int fn_82E63500();


undefined8 fn_82E53040(int *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  fn_82E50F00(param_1 + 1,1);
  puVar1 = (undefined2 *)fn_82E63500(param_1,param_2);
  uVar3 = 0;
  if (puVar1 != (undefined2 *)0x0) {
    puVar2 = (undefined4 *)fn_82E4FE08(0x10);
    *(undefined4 **)(puVar1 + 4) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar1 = 0x48;
      *puVar2 = *param_3;
      puVar2[1] = param_3[1];
      puVar2[2] = param_3[2];
      puVar2[3] = param_3[3];
      goto LAB_82e530e0;
    }
    (**(code **)(*param_1 + 0x4c))(param_1,param_2);
  }
  uVar3 = 0xffffffff8007000e;
LAB_82e530e0:
  fn_82E51028(param_1 + 1,1);
  return uVar3;
}

