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
extern int fn_825089A0();
extern int fn_828EA790();
extern int fn_82F63EC8();
extern unsigned int *lbl_83214508;
extern unsigned int lbl_83214514;
extern unsigned int uRam8321450c;


undefined8 fn_828EB650(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *apuStack_40 [16];
  
  uVar4 = 0;
  uVar5 = lbl_83214514;
  do {
    if ((uVar5 & 1) == 0) {
      lbl_83214514 = uVar5 | 1;
      uRam8321450c = 0;
      piVar3 = (int *)fn_825089A0();
      lbl_83214508 = (undefined4 *)(**(code **)(*piVar3 + 0x24))(piVar3,0x18,0);
      *lbl_83214508 = lbl_83214508;
      lbl_83214508[1] = lbl_83214508;
      lbl_83214508[2] = lbl_83214508;
      *(undefined1 *)(lbl_83214508 + 5) = 1;
      *(undefined1 *)((int)lbl_83214508 + 0x15) = 1;
      fn_82F63EC8(0xffffffff831418a0);
      uVar5 = lbl_83214514;
    }
    apuStack_40[0] = (undefined4 *)*lbl_83214508;
    while( true ) {
      puVar2 = apuStack_40[0];
      if ((uVar5 & 1) == 0) {
        lbl_83214514 = uVar5 | 1;
        uRam8321450c = 0;
        piVar3 = (int *)fn_825089A0();
        lbl_83214508 = (undefined4 *)(**(code **)(*piVar3 + 0x24))(piVar3,0x18,0);
        *lbl_83214508 = lbl_83214508;
        lbl_83214508[1] = lbl_83214508;
        lbl_83214508[2] = lbl_83214508;
        *(undefined1 *)(lbl_83214508 + 5) = 1;
        *(undefined1 *)((int)lbl_83214508 + 0x15) = 1;
        fn_82F63EC8(0xffffffff831418a0);
        uVar5 = lbl_83214514;
      }
      if (puVar2 == lbl_83214508) goto LAB_828eb7a0;
      iVar1 = puVar2[4];
      if (*(uint *)(iVar1 + 0x70) == uVar4) break;
      fn_828EA790(apuStack_40);
    }
    if ((iVar1 != 0) && (*(char *)(iVar1 + 0x88) != '\0')) {
      return 1;
    }
LAB_828eb7a0:
    uVar4 = uVar4 + 1;
    if (3 < uVar4) {
      return 0;
    }
  } while( true );
}

