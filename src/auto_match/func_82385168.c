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
extern int fn_823852D8();
extern int fn_82385670();
extern int fn_823857D8();
extern unsigned int iStack0000001c;
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CC160;
extern unsigned int stack0x0000001c;


undefined8
fn_82385168(undefined8 param_1,double param_2,int param_3,undefined8 param_4,undefined8 param_5,
             longlong param_6,undefined8 param_7,int *param_8,undefined8 param_9,ulonglong param_10)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  int iStack0000001c;
  
  iStack0000001c = (int)param_4;
  iVar1 = iStack0000001c * 0x140 + param_3;
  if (*(int *)(iVar1 + 0x27c) == 0) {
    if (*(int *)(iVar1 + 0x294) == 0) {
      uVar4 = fn_823852D8(param_1,param_2,param_3,&stack0x0000001c,param_5,-(param_6 != 0) & 3
                                ,(-(param_6 != 0) & 3U) + 3,3,param_8,param_9);
      param_8[0xc] = (int)(float)param_2;
    }
    else if ((param_10 & 0xffffffff) == 0) {
      *param_8 = iStack0000001c;
      param_8[0xd] = (int)param_9;
      iVar3 = lbl_821CC160;
      iVar1 = lbl_8218E8E8;
      param_8[2] = 0;
      param_8[1] = iVar3;
      param_8[3] = 0;
      param_8[0xc] = iVar1;
      *(undefined2 *)(param_8 + 0xe) = 0x5b;
      puVar2 = (undefined4 *)((uint)(param_8 + 4) & 0xfffffff0);
      *puVar2 = in_register_00010010;
      puVar2[1] = in_register_00010014;
      puVar2[2] = in_register_00010018;
      puVar2[3] = in_vr1;
      uVar4 = 1;
      puVar2 = (undefined4 *)((uint)(param_8 + 8) & 0xfffffff0);
      *puVar2 = in_register_00010010;
      puVar2[1] = in_register_00010014;
      puVar2[2] = in_register_00010018;
      puVar2[3] = in_vr1;
    }
    else {
      uVar4 = fn_823857D8(param_2,param_3,param_4,param_10,param_6,param_8,param_9);
    }
  }
  else {
    uVar4 = fn_82385670(param_2,param_3,param_4,param_6,param_6,param_8,param_9);
    if ((int)uVar4 == 0) {
      fn_82385670(param_2,param_3,param_4,(int)param_6 == 0);
      uVar4 = 1;
    }
  }
  return uVar4;
}

