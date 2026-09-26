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
extern int fn_8267B890();
extern int fn_82774AC0();
extern int fn_82775EB0();
extern int fn_82776E60();
extern int fn_82777070();
extern int fn_82777888();
extern int fn_827B7580();


uint * fn_82778CD0(uint *param_1,ulonglong param_2,uint *param_3,undefined8 param_4,int *param_5,
                    undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined4 *puVar2;
  int in_stack_00000054;
  
  RtlEnterCriticalSection(param_1 + 0x279);
  if ((param_2 & 0xffffffff) == 0) {
    param_2 = (ulonglong)*param_1;
  }
  fn_82776E60(param_1,*(undefined4 *)(*param_5 + 0xc));
  if (param_3 != (uint *)0x0) {
    uVar1 = param_3[2];
    if ((uint *)param_3[3] == param_1) {
      if (uVar1 == 0) {
        puVar2 = (undefined4 *)fn_8267B890(param_2,0x28,0);
        if (puVar2 == (undefined4 *)0x0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = 0;
          puVar2[3] = 0;
          puVar2[4] = 0;
          puVar2[5] = 0;
          puVar2[6] = 0;
          puVar2[7] = 0;
          puVar2[8] = 0;
          *(undefined1 *)(puVar2 + 9) = 0;
          *(undefined1 *)((int)puVar2 + 0x25) = 0;
        }
        param_3[2] = (uint)puVar2;
      }
      else if (in_stack_00000054 != 0) {
        fn_82777070();
      }
      goto LAB_82778e48;
    }
    if (uVar1 != 0) {
      fn_82775EB0(uVar1,1);
    }
  }
  param_3 = (uint *)fn_82774AC0(param_1 + 9);
  param_3[3] = (uint)param_1;
  puVar2 = (undefined4 *)fn_8267B890(param_2,0x28,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    *(undefined1 *)(puVar2 + 9) = 0;
    *(undefined1 *)((int)puVar2 + 0x25) = 0;
  }
  param_3[2] = (uint)puVar2;
  *param_3 = param_1[0xe];
  param_3[1] = (uint)(param_1 + 0xe);
  *(uint **)(param_1[0xe] + 4) = param_3;
  param_1[0xe] = (uint)param_3;
LAB_82778e48:
  fn_82777888(param_1,param_3[2],param_4,param_5,param_6,param_7,param_8,in_stack_00000054);
  fn_827B7580(param_1 + 0x10,*(undefined4 *)(*param_5 + 0xc));
  RtlLeaveCriticalSection(param_1 + 0x279);
  return param_3;
}

