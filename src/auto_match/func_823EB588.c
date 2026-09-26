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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_50;
extern int fn_8227CB30();
extern int fn_82359C18();
extern int fn_823D1F70();
extern unsigned int uStack_28;
extern unsigned int uStack_30;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;


void fn_823EB588(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int in_r0;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined1 auStack_50 [8];
  uint uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_48 = *(uint *)(param_1 + 4);
  uVar3 = (ulonglong)uStack_48;
  puVar1 = (undefined4 *)((int)&uStack_30 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  uStack_40 = param_2;
  uVar2 = fn_823D1F70(auStack_50,0x823d161000000000,CONCAT44(uStack_48,uStack_44),
                            CONCAT44(param_2,uStack_3c),uStack_38,uStack_30,uStack_28);
  fn_8227CB30(uVar3 + 0xc80,uVar2);
  fn_82359C18(uVar2);
  return;
}

