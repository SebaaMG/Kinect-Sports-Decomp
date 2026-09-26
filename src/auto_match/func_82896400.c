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
extern unsigned int *auStack_3c;
extern unsigned int *auStack_60;
extern int fn_825089A0();
extern int fn_8288C358();
extern int fn_82894C90();
extern int fn_82894E98();
extern int fn_82896158();
extern int fn_828A20D0();
extern unsigned int uStack_40;
extern unsigned int uStack_70;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * fn_82896400(int param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined1 uStack_70;
  undefined4 *apuStack_6c [3];
  undefined4 auStack_60 [8];
  uint uStack_40;
  undefined4 auStack_3c [15];
  
  puVar5 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)puVar5[1] + 0x29) == '\0') {
    puVar1 = (undefined4 *)puVar5[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar5 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x29) == '\0');
  }
  if ((puVar5 == *(undefined4 **)(param_1 + 4)) || (*param_2 < (uint)puVar5[3])) {
    fn_828A20D0(auStack_60,uStack_70);
    uStack_40 = *param_2;
    fn_828A20D0(auStack_3c,uStack_70);
    fn_82894C90(auStack_3c,auStack_60);
    uVar3 = fn_82896158(param_1,&uStack_40);
    fn_82894E98(apuStack_6c,param_1,puVar5,uVar3);
    fn_8288C358(auStack_3c);
    piVar4 = (int *)fn_825089A0();
    (**(code **)(*piVar4 + 0x28))(piVar4,auStack_3c[0]);
    auStack_3c[0] = 0;
    fn_8288C358(auStack_60);
    piVar4 = (int *)fn_825089A0();
    (**(code **)(*piVar4 + 0x28))(piVar4,auStack_60[0]);
    puVar5 = apuStack_6c[0];
  }
  return puVar5 + 4;
}

