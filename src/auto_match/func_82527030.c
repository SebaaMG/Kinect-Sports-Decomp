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
extern int fn_8265B638();
extern int fn_8265CA60();
extern int fn_8265CAA0();
extern int fn_82E1CA08();
extern int fn_82E1CA58();
extern int fn_82E1CA90();
extern int fn_82E1CCD0();
extern int fn_82F64020();


void fn_82527030(int param_1)

{
  bool bVar1;
  char cVar4;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  
  bVar1 = false;
  iVar7 = 0;
  iVar5 = (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0x1c;
  if (0 < iVar5) {
    iVar6 = 0;
    do {
      if ((iVar7 < 0) || (iVar5 <= iVar7)) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        puVar8 = (undefined4 *)(iVar6 + *(int *)(param_1 + 0x10));
        if (0xf < (uint)puVar8[5]) {
          puVar8 = (undefined4 *)*puVar8;
        }
      }
      cVar4 = fn_82E1CCD0(puVar8);
      if (cVar4 == '\0') {
        bVar1 = true;
        break;
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0x1c;
      iVar5 = (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0x1c;
    } while (iVar7 < iVar5);
  }
  if (!bVar1) {
    uVar2 = fn_8265CA60(0x40);
    uVar3 = fn_8265B638();
    fn_82F64020(uVar2,0x40,0xffffffff821c36ec,uVar3);
    fn_82E1CCD0(uVar2);
    cVar4 = fn_82E1CCD0(0xffffffff821c36f8);
    if (cVar4 != '\0') {
      fn_82E1CA58(0x6e);
      puVar8 = (undefined4 *)0x831cf2f8;
      do {
        fn_82E1CA90(puVar8[-2],puVar8[-1],*puVar8,*(undefined1 *)(puVar8 + 1));
        puVar8 = puVar8 + 4;
      } while ((int)puVar8 < -0x7ce30628);
      fn_82E1CA08();
    }
    fn_8265CAA0(uVar2);
  }
  return;
}

