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
extern int fn_82B7BD28();
extern int fn_82BC0088();


undefined8
fn_82BC9078(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
             undefined8 param_5,int param_6)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5b0);
  puVar2 = (undefined4 *)fn_82B7BD28(uVar1,0x10);
  *puVar2 = uVar1;
  puVar2[1] = param_2;
  puVar2[2] = *param_3;
  puVar2[3] = param_4;
  puVar3 = (undefined4 *)fn_82BC0088(param_6,*(undefined4 *)(param_6 + 4));
  *puVar3 = puVar2 + 1;
  *param_3 = 0xffffffff;
  return param_5;
}

