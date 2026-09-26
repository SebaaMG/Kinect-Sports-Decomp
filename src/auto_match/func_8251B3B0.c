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
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_82250928();
extern int fn_822509A0();
extern int fn_825166A0();
extern int fn_82516FD8();
extern int fn_825174B8();
extern int fn_82517978();
extern int fn_8288B760();
extern int fn_828A8BA0();
extern int fn_828BB690();
extern int fn_828C24F0();
extern int fn_828C2670();
extern unsigned int iStack_34;
extern unsigned int iStack_3c;
extern unsigned int iStack_44;
extern unsigned int iStack_4c;
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int iStack_64;
extern unsigned int iStack_68;
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int iStack_74;
extern unsigned int uStack_78;


void fn_8251B3B0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar4;
  char cVar5;
  undefined8 uVar3;
  undefined4 *apuStack_80 [2];
  undefined4 uStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  undefined1 auStack_50 [4];
  int iStack_4c;
  int iStack_44;
  undefined1 auStack_40 [4];
  int iStack_3c;
  int iStack_34;
  
  piVar4 = (int *)fn_828A8BA0(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
  apuStack_80[0] = (undefined4 *)**(int **)(param_1 + 0x18);
  if (apuStack_80[0] != *(int **)(param_1 + 0x18)) {
    do {
      puVar1 = apuStack_80[0];
      if (*(char *)(apuStack_80[0] + 0xc) == '\x01') {
        uStack_78 = 0;
        iStack_74 = 0;
        fn_82517978(&uStack_78,apuStack_80[0][10],apuStack_80[0][0xb],0);
        cVar5 = fn_8288B760(piVar4);
        if (cVar5 != '\0') {
          fn_828BB690(&iStack_70,piVar4[4],puVar1 + 3);
          if ((iStack_70 != 0) && ((uint)(piVar4[0x1f] - piVar4[0x1e] >> 4) < 7)) {
            uVar3 = fn_825174B8(auStack_50,&iStack_70,&uStack_78);
            fn_82516FD8(piVar4 + 0x1e,uVar3);
            if (iStack_44 != 0) {
              fn_822315A0();
            }
            if (iStack_4c != 0) {
              fn_822315A0();
            }
            fn_825166A0(piVar4);
          }
          if (iStack_6c != 0) {
            fn_822315A0();
          }
        }
        if (iStack_74 != 0) {
          fn_822315A0();
        }
      }
      fn_82250928(apuStack_80);
    } while (apuStack_80[0] != *(undefined4 **)(param_1 + 0x18));
  }
  puVar1 = *(undefined4 **)(param_1 + 0x28);
  apuStack_80[0] = (undefined4 *)*puVar1;
  while (puVar2 = apuStack_80[0], apuStack_80[0] != puVar1) {
    if ((*(char *)(apuStack_80[0] + 0x11) == '\x01') &&
       (cVar5 = fn_8288B760(piVar4), cVar5 != '\0')) {
      fn_828C24F0(&iStack_60,piVar4[4],puVar2 + 3);
      if (iStack_60 != 0) {
        fn_828C2670(&iStack_68,iStack_60,puVar2 + 10);
        if ((iStack_68 != 0) && ((uint)(piVar4[0x1b] - piVar4[0x1a] >> 4) < 7)) {
          uVar3 = fn_825174B8(auStack_40,&iStack_60,&iStack_68);
          fn_82516FD8(piVar4 + 0x1a,uVar3);
          if (iStack_34 != 0) {
            fn_822315A0();
          }
          if (iStack_3c != 0) {
            fn_822315A0();
          }
          fn_825166A0(piVar4);
        }
        if (iStack_64 != 0) {
          fn_822315A0();
        }
      }
      if (iStack_5c != 0) {
        fn_822315A0();
      }
    }
    fn_822509A0(apuStack_80);
    puVar1 = *(undefined4 **)(param_1 + 0x28);
  }
  (**(code **)(*piVar4 + 0xc))(piVar4);
  return;
}

