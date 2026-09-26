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
extern int fn_82381BC0();
extern int fn_82825F40();
extern unsigned int *lbl_83296FF8;


longlong fn_82594EC8(uint *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined4 *apuStack_30 [12];
  
  puVar3 = (undefined4 *)lbl_83296FF8[1];
  puVar5 = lbl_83296FF8;
  puVar4 = lbl_83296FF8;
  if (*(char *)((int)puVar3 + 0x15) == '\0') {
    puVar2 = puVar3;
    do {
      if ((uint)puVar2[3] < *param_1) {
        puVar1 = (undefined4 *)puVar2[2];
      }
      else {
        if ((*(char *)((int)puVar4 + 0x15) != '\0') && (*param_1 < (uint)puVar2[3])) {
          puVar4 = puVar2;
        }
        puVar1 = (undefined4 *)*puVar2;
        puVar5 = puVar2;
      }
      puVar2 = puVar1;
    } while (*(char *)((int)puVar1 + 0x15) == '\0');
  }
  if (*(char *)((int)puVar4 + 0x15) == '\0') {
    puVar3 = (undefined4 *)*puVar4;
  }
  if (*(char *)((int)puVar3 + 0x15) == '\0') {
    do {
      if (*param_1 < (uint)puVar3[3]) {
        puVar2 = (undefined4 *)*puVar3;
        puVar4 = puVar3;
      }
      else {
        puVar2 = (undefined4 *)puVar3[2];
      }
      puVar3 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  lVar6 = 0;
  apuStack_30[0] = puVar5;
  while (apuStack_30[0] != puVar4) {
    lVar6 = lVar6 + 1;
    fn_82381BC0(apuStack_30);
  }
  fn_82825F40(apuStack_30,0xffffffff83296ff4,puVar5,puVar4);
  return lVar6;
}

