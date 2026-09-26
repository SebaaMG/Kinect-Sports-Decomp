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
extern unsigned int *auStack_68;
extern unsigned int *auStack_bc;
extern unsigned int *auStack_c0;
extern int fn_8265CA20();
extern int fn_82888948();
extern int fn_82889220();
extern int fn_82889518();
extern int fn_828E9D28();
extern unsigned int iStack_4c;
extern unsigned int iStack_a4;
extern unsigned int uStack_70;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;


undefined4 * fn_82889760(int param_1,ushort *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *apuStack_d0 [4];
  undefined1 auStack_c0 [4];
  undefined1 auStack_bc [16];
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ushort uStack_70;
  undefined1 auStack_68 [28];
  int iStack_4c;
  
  puVar4 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)puVar4[1] + 0x61) == '\0') {
    puVar1 = (undefined4 *)puVar4[1];
    do {
      if (*(ushort *)(puVar1 + 4) < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x61) == '\0');
  }
  if ((puVar4 == *(undefined4 **)(param_1 + 4)) || (*param_2 < *(ushort *)(puVar4 + 4))) {
    iStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_ac = 0;
    uStack_a8 = 0;
    fn_828E9D28(auStack_bc,0,0);
    uStack_70 = *param_2;
    fn_82889220(auStack_68,auStack_c0);
    iVar3 = fn_82888948(param_1);
    if ((ushort *)(iVar3 + 0x10) != (ushort *)0x0) {
      *(ushort *)(iVar3 + 0x10) = uStack_70;
      fn_82889220(iVar3 + 0x18,auStack_68);
    }
    fn_82889518(apuStack_d0,param_1,puVar4,iVar3);
    if (iStack_4c != 0) {
      fn_8265CA20();
    }
    puVar4 = apuStack_d0[0];
    if (iStack_a4 != 0) {
      fn_8265CA20();
    }
  }
  return puVar4 + 6;
}

