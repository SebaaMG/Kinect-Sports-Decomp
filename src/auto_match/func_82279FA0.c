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
extern unsigned int *auStack_110;
extern unsigned int *auStack_128;
extern unsigned int *auStack_130;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_e0;
extern int fn_8225F670();
extern int fn_8225FDE0();
extern int fn_82292780();
extern int fn_82292AE8();
extern int fn_82526C70();
extern int fn_82536590();
extern int fn_8266F668();
extern int fn_82672C20();
extern int fn_828647D8();
extern int fn_82864898();
extern int fn_82864988();
extern int fn_82E1CAD0();
extern int fn_82E1CB08();
extern int fn_82E1CCA8();


void fn_82279FA0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  char cVar8;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 auStack_130 [2];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [48];
  undefined1 auStack_e0 [48];
  undefined1 auStack_b0 [176];
  
  *(undefined4 *)(param_1 + 0xf4) = 1;
  if (*(int *)(param_1 + 0xdc) != 0) {
    if (*(undefined4 **)(param_1 + 0xa4) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0xa4))();
    }
    puVar5 = *(undefined4 **)(param_1 + 0x10);
    for (puVar1 = (undefined4 *)*puVar5; puVar1 != puVar5; puVar1 = (undefined4 *)*puVar1) {
      iVar2 = puVar1[2];
      if (*(int *)(iVar2 + 0x10) == param_2) {
        fn_82526C70(auStack_b0,0x80,0xffffffff821a820c,iVar2 + 0x18);
        fn_82672C20(*(undefined4 *)(iVar2 + 8),auStack_b0,0,0);
        puVar5 = (undefined4 *)fn_8266F668(auStack_130,*(undefined4 *)(param_1 + 8));
        pcVar6 = (char *)fn_8225F670();
        if (((*pcVar6 != '\0') && (iVar7 = fn_8225FDE0(0x61,1), iVar7 == 0)) &&
           (cVar8 = fn_82E1CAD0(0x61), cVar8 != '\0')) {
          fn_82526C70(auStack_128,10,0xffffffff821a6800,*puVar5);
          fn_82E1CB08(0xffffffff821a7844,auStack_128,0);
          fn_82E1CB08(0xffffffff821a784c,iVar2 + 0x18,0);
          fn_82E1CB08(0xffffffff821a7858,iVar2 + 100,0);
          fn_82E1CCA8();
        }
        break;
      }
      puVar5 = *(undefined4 **)(param_1 + 0x10);
    }
    fn_82864988(auStack_e0,0xffffffff821a8274);
    auStack_130[0] = fn_828647D8();
    fn_82864898(auStack_e0);
    lVar3 = fn_82292AE8();
    fn_82292780(auStack_110,lVar3 + 0x28);
    uVar4 = fn_828647D8(auStack_110);
    fn_82536590(auStack_130,uVar4);
    fn_82864898(auStack_110);
  }
  *(undefined4 *)(param_1 + 0xf4) = 0;
  return;
}

