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
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern int fn_825A2410();
extern int fn_82CE4040();
extern int fn_82CED0A0();
extern int fn_82CED1A0();
extern int fn_82CED218();
extern int fn_82E0B980();
extern int fn_82E0C7A0();
extern int fn_82E0C868();
extern int fn_82E0D7E8();
extern int fn_82E10A30();
extern int fn_82E12AC8();
extern unsigned int lbl_8323FDE4;


undefined8 fn_826034A0(int *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [160];
  
  uVar4 = 0;
  if (param_1[1] != 0) {
    iVar5 = 0;
    do {
      if (*(int *)(iVar5 + *param_1) == 5) {
        puVar3 = *(undefined4 **)(uVar4 * 8 + *param_1 + 4);
        goto LAB_826034e8;
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 8;
    } while (uVar4 < (uint)param_1[1]);
  }
  puVar3 = (undefined4 *)0x0;
LAB_826034e8:
  if ((puVar3 == (undefined4 *)0x0) || (puVar3[1] == 0)) {
    uVar1 = 0;
  }
  else {
    fn_82CED1A0(auStack_b0,*puVar3,puVar3[1],0);
    fn_82E0B980(auStack_a0);
    uVar1 = fn_82CED0A0(auStack_b0);
    fn_82E0D7E8(auStack_a0,uVar1);
    fn_82E10A30(auStack_a0,lbl_8323FDE4);
    uVar1 = fn_82E12AC8(auStack_a0,0xffffffff821ca800);
    uVar2 = fn_82E0C868(auStack_a0);
    fn_82CE4040();
    puVar3 = (undefined4 *)fn_825A2410(param_1 + 5);
    *puVar3 = uVar2;
    fn_82E0C7A0(auStack_a0);
    fn_82CED218(auStack_b0);
  }
  return uVar1;
}

