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
extern unsigned int *auStack_b0;
extern int fn_825089A0();
extern int fn_828B20B8();
extern int fn_828B2148();
extern int fn_828B2278();
extern int fn_828B2BF8();
extern int fn_828B3D00();
extern int fn_828B3E88();
extern int fn_828B4D60();
extern int fn_82F68CC0();
extern unsigned int lbl_82024D24;
extern unsigned int uStack_78;


void fn_828B4E60(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  char cVar4;
  int *piVar3;
  undefined1 auStack_b0 [48];
  undefined **appuStack_80 [2];
  undefined4 uStack_78;
  longlong lStack_70;
  undefined1 auStack_68 [104];
  
  if (*(char *)(param_1 + 0x38) != '\0') {
    uVar1 = *(undefined4 *)(param_1 + 0x40);
    uVar2 = fn_828B2BF8();
    cVar4 = fn_828B2278(uVar2,uVar1);
    if (cVar4 == '\x01') {
      uVar1 = *(undefined4 *)(param_1 + 0x40);
      uVar2 = fn_828B2BF8();
      cVar4 = fn_828B20B8(uVar2,uVar1,auStack_b0);
      if (cVar4 != '\0') {
        do {
          appuStack_80[0] = &lbl_82024D24;
          uStack_78 = 0;
          piVar3 = (int *)fn_825089A0();
          lStack_70 = (**(code **)(*piVar3 + 0xc))();
          lStack_70 = lStack_70 + 500;
          fn_82F68CC0(auStack_68,auStack_b0,0x2a);
          fn_828B3D00(param_1 + 8,appuStack_80);
          appuStack_80[0] = &lbl_82024D24;
          uVar1 = *(undefined4 *)(param_1 + 0x40);
          uVar2 = fn_828B2BF8();
          cVar4 = fn_828B20B8(uVar2,uVar1,auStack_b0);
        } while (cVar4 != '\0');
      }
    }
    else {
      fn_828B3E88(param_1 + 8);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x40);
    uVar2 = fn_828B2BF8();
    uVar2 = fn_828B2148(uVar2,uVar1);
    piVar3 = (int *)**(int **)(param_1 + 0x20);
    if (piVar3 != *(int **)(param_1 + 0x20)) {
      do {
        (**(code **)(*(int *)piVar3[2] + 0x40))((int *)piVar3[2],uVar2);
        piVar3 = (int *)*piVar3;
      } while (piVar3 != (int *)*(int *)(param_1 + 0x20));
    }
  }
  fn_828B4D60(param_1);
  return;
}

