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
extern unsigned int *auStack_454;
extern unsigned int *auStack_46c;
extern unsigned int *auStack_60;
extern int fn_82230300();
extern int fn_8225C590();
extern int fn_8225DA18();
extern int fn_82486B08();
extern int fn_82829120();
extern int fn_82A1DD38();
extern unsigned int iStack_470;
extern unsigned int uStack_45c;
extern unsigned int uStack_460;


void fn_82269DE0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iStack_470;
  undefined4 auStack_46c [3];
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined1 auStack_454 [1012];
  undefined1 auStack_60 [96];
  
  lVar2 = fn_8225C590();
  iVar6 = *param_1;
  if (iVar6 != param_1[1]) {
    lVar5 = 0x420;
    do {
      if (*(int *)(iVar6 + 0x40) != param_2) {
        for (puVar1 = (undefined4 *)**(undefined4 **)param_1[0xb3];
            puVar1 != *(undefined4 **)param_1[0xb3]; puVar1 = (undefined4 *)*puVar1) {
          iVar4 = puVar1[2];
          if (*(int *)(iVar4 + 0x40) == *(int *)(iVar6 + 0x40)) goto LAB_82269e50;
        }
        iVar4 = 0;
LAB_82269e50:
        iVar4 = *(int *)(iVar4 + 0xdc);
        fn_82486B08(&uStack_460);
        uStack_460 = 0;
        uStack_45c = *(undefined4 *)(iVar6 + 0xd0);
        uVar3 = (**(code **)(**(int **)(iVar4 + 0x8c0) + 100))();
        fn_82A1DD38(auStack_454,uVar3,1000);
        fn_82A1DD38((ulonglong)(uint)param_1[0xe3] + lVar5 + 0x838,&uStack_460,0x420);
        auStack_46c[0] = fn_8225DA18(lVar2,*(undefined4 *)(iVar6 + 0xd0));
        fn_82829120(&iStack_470,lVar2 + 0x48,auStack_46c);
        iVar4 = *(int *)(iStack_470 + 0x10);
        fn_82A1DD38(iVar4,uVar3,1000);
        *(undefined4 *)(iVar4 + 0x404) = 1;
        *(undefined4 *)(iVar4 + 0x408) = 1;
        lVar5 = lVar5 + 0x420;
        fn_82230300(auStack_60,1,0);
      }
      iVar6 = iVar6 + 0xe0;
    } while (iVar6 != param_1[1]);
  }
  return;
}

