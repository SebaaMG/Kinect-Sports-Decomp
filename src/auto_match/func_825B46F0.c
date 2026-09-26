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
extern int fn_82554260();
extern int fn_827EFC90();
extern int fn_827F04B0();
extern int fn_827F2DD0();
extern int fn_82D93670();
extern unsigned int lbl_821CC160;


void fn_825B46F0(uint *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar4;
  ulonglong uVar3;
  uint uVar5;
  uint uVar6;
  double dVar7;
  
  uVar6 = *param_1;
  uVar1 = param_1[1];
  if (uVar6 < uVar1) {
    dVar7 = (double)lbl_821CC160;
    uVar5 = uVar6;
    do {
      if (*(int *)(uVar6 + 0xd4) != 0) {
        fn_82D93670(*(int *)(uVar6 + 0xd4),0x201f,uVar5);
      }
      if (*(int *)(uVar6 + 0xec) == 0) {
        puVar2 = *(undefined4 **)(uVar6 + 0xe4);
        if (puVar2[0x50] == 0) {
          uVar4 = (**(code **)(*(int *)*puVar2 + 0x4c))();
          puVar2[0x50] = uVar4;
          uVar3 = fn_827F04B0(0x1a0);
          if ((uVar3 & 0xffffffff) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = fn_82554260(uVar3,puVar2[0x50],1);
          }
          puVar2[0x51] = uVar4;
          fn_827F2DD0(dVar7,puVar2[0x50]);
        }
        fn_827EFC90(puVar2[0x50],*(uint *)(uVar6 + 0xf4) & 0xffff,0xffffffff831d4550,uVar6);
      }
      uVar6 = uVar6 + 0x3f0;
      uVar5 = uVar5 + 0x3f0;
    } while (uVar6 < uVar1);
  }
  return;
}

