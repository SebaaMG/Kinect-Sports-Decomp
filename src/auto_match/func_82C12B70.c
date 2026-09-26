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
extern int fn_82C105F0();
extern int fn_82C10AD0();
extern int fn_82C127B8();
extern int fn_82C12820();
extern int fn_82C12840();
extern int fn_82C12850();
extern int fn_82C12A58();
extern int fn_82F68CC0();


void fn_82C12B70(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *apuStack_40 [16];
  
  cVar3 = '\0';
  apuStack_40[0] = (undefined8 *)0x0;
  iVar1 = fn_82C10AD0(param_5,3,0x50,apuStack_40);
  puVar4 = apuStack_40[0];
  if (-1 < iVar1) {
    puVar2 = apuStack_40[0] + -1;
    lVar5 = 10;
    do {
      puVar2 = puVar2 + 1;
      *puVar2 = 0;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    param_1[1] = fn_82C12A58;
    *param_1 = fn_82C127B8;
    param_1[2] = fn_82C12820;
    param_1[3] = fn_82C12840;
    param_1[4] = fn_82C12840;
    *apuStack_40[0] = 0;
    *(undefined4 *)(apuStack_40[0] + 1) = 0;
    *(undefined4 *)((int)apuStack_40[0] + 0xc) = 1;
    *(undefined4 *)(apuStack_40[0] + 2) = 1;
    *(undefined4 *)((int)apuStack_40[0] + 0x14) = 0;
    *(undefined4 *)((int)apuStack_40[0] + 0x1c) = 10;
    *(undefined4 *)(apuStack_40[0] + 4) = 0x14;
    *(undefined4 *)((int)apuStack_40[0] + 0x24) = 0xffffffff;
    *(undefined4 *)(apuStack_40[0] + 5) = 0xffffffff;
    *(undefined4 *)((int)apuStack_40[0] + 0x2c) = 0xffffffff;
    *(undefined4 *)(apuStack_40[0] + 6) = 0xffffffff;
    *(undefined4 *)((int)apuStack_40[0] + 0x34) = 0x200;
    *(undefined4 *)(apuStack_40[0] + 7) = param_2;
    *(undefined4 *)((int)apuStack_40[0] + 0x3c) = param_3;
    *(int *)(apuStack_40[0] + 8) = (int)param_5;
    fn_82F68CC0(param_4,(int)apuStack_40[0] + 0xc,0x2c);
    param_1[5] = puVar4;
    if (*(int *)((int)puVar4 + 0x44) == 0) {
      do {
        iVar1 = fn_82C12850(puVar4);
        if (iVar1 < 0) {
          return;
        }
        cVar3 = cVar3 + '\x01';
        puVar4 = apuStack_40[0];
      } while (cVar3 < '\x02');
    }
    fn_82C105F0(param_5,6,0xffffffff82d7e470,puVar4);
  }
  return;
}

