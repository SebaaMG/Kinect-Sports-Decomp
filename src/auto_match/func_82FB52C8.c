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
extern int fn_82FA5190();
extern int fn_82FA9208();
extern int fn_82FB5068();
extern int fn_82FF6060();
extern unsigned int lbl_831BC768;


void fn_82FB52C8(int param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  
  puVar2 = *(undefined4 **)(param_1 + 0x54);
  puVar7 = (undefined4 *)0x0;
  do {
    while( true ) {
      puVar6 = puVar2;
      if (puVar6 == (undefined4 *)0x0) {
        return;
      }
      puVar1 = (undefined4 *)puVar6[1];
      if ((((0 < (int)puVar1[0x12]) || (*(char *)(puVar1 + 0x11) != '\0')) ||
          ((puVar1[7] != 0 && ((*(byte *)(puVar1[7] + 0x34) & 0x80) != 0)))) ||
         (bVar5 = false, (puVar1[0xc] & 0x80000000) != 0)) {
        bVar5 = true;
      }
      if (!bVar5) break;
      fn_82FB5068(puVar1,param_2);
LAB_82fb5360:
      puVar2 = (undefined4 *)*puVar6;
      puVar7 = puVar6;
    }
    if (puVar1 == *(undefined4 **)(*(int *)(param_1 + 0x74) + 4)) goto LAB_82fb5360;
    puVar2 = (undefined4 *)*puVar6;
    fn_82FF6060(param_1 + 0x54,puVar6,puVar7);
    uVar3 = puVar1[0x13];
    puVar1[0x13] = (int)((ulonglong)uVar3 - 1);
    if ((ulonglong)uVar3 - 1 == 0) {
      iVar4 = puVar1[7];
      puVar1[7] = 0;
      if (iVar4 != 0) {
        fn_82FA9208();
      }
      uVar8 = lbl_831BC768;
      (**(code **)*puVar1)(puVar1,0);
      fn_82FA5190(uVar8,puVar1);
    }
  } while( true );
}

