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
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern int fn_825A2410();
extern int fn_82CE4040();
extern int fn_82CEBB58();
extern int fn_82CEBB90();
extern int fn_82CEBC18();
extern int fn_82E0A1C0();
extern int fn_82E0B980();
extern int fn_82E0C7A0();
extern int fn_82E0C868();
extern int fn_82E0D7E8();
extern int fn_82E10A30();
extern int fn_82E12AC8();
extern unsigned int lbl_8323FDE4;


void fn_825A54A8(int *param_1)

{
  char *pcVar2;
  int iVar3;
  undefined8 uVar1;
  undefined4 *puVar4;
  uint uVar5;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [136];
  
  uVar5 = 0;
  if (param_1[1] != 0) {
    iVar3 = 0;
    do {
      if (*(int *)(iVar3 + *param_1) == 4) {
        puVar4 = *(undefined4 **)(uVar5 * 8 + *param_1 + 4);
        goto code_r0x825a54fc;
      }
      uVar5 = uVar5 + 1;
      iVar3 = iVar3 + 8;
    } while (uVar5 < (uint)param_1[1]);
  }
  puVar4 = (undefined4 *)0x0;
code_r0x825a54fc:
  if (puVar4 != (undefined4 *)0x0) {
    fn_82E0B980(auStack_a0);
    param_1[3] = 4;
    fn_82CEBB90(auStack_c0,*puVar4,puVar4[1],2);
    pcVar2 = (char *)fn_82CEBB58(auStack_d0,auStack_c0);
    if ((*pcVar2 != '\0') && (iVar3 = fn_82E0D7E8(auStack_a0,auStack_c0), iVar3 == 0)) {
      fn_82E10A30(auStack_a0,lbl_8323FDE4);
      uVar1 = fn_82E0A1C0(auStack_a0);
      iVar3 = fn_82E12AC8(auStack_a0,uVar1);
      param_1[2] = iVar3;
      uVar1 = fn_82E0C868(auStack_a0);
      fn_82CE4040();
      fn_82CE4040(uVar1);
      puVar4 = (undefined4 *)fn_825A2410(param_1 + 5);
      *puVar4 = (int)uVar1;
    }
    fn_82CEBC18(auStack_c0);
    fn_82E0C7A0(auStack_a0);
  }
  return;
}

