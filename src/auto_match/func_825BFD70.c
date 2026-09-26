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
extern unsigned int *auStack_40;
extern int fn_82A1EFC0();
extern unsigned int iStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


int fn_825BFD70(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int in_r0;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined1 auStack_40 [40];
  
  iStack_44 = *(int *)(param_2 + 0x34);
  if (iStack_44 == -2) {
    fn_82A1EFC0(&uStack_48,0,0x18);
    uStack_50 = 0x1e;
    uStack_4c = 0x20;
    puVar1 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar1 = in_register_00010010;
    puVar1[1] = in_register_00010014;
    puVar1[2] = in_register_00010018;
    puVar1[3] = in_vr1;
    iStack_44 = -1;
    uStack_48 = param_3;
    (**(code **)(*param_1 + 0xc))(param_1,&uStack_50);
  }
  return iStack_44;
}

