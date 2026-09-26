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
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_82270B70();
extern int fn_82279C58();
extern int fn_82356F98();
extern int fn_823F2E20();
extern int fn_8266F6A8();
extern unsigned int iStack_44;
extern unsigned int iStack_4c;
extern unsigned int lbl_8326B394;


void fn_8226FF40(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar5;
  undefined4 *puVar4;
  int iVar6;
  int iVar7;
  undefined1 auStack_50 [4];
  int iStack_4c;
  undefined1 auStack_48 [4];
  int iStack_44;
  
  iVar3 = fn_82270B70();
  if (*(int *)(iVar3 + 4) != 0) {
    iVar1 = *param_1;
    if (iVar1 == 0) {
      fn_82356F98(auStack_50);
      fn_823F2E20(iVar3 + 0x104,auStack_50);
      if (iStack_4c != 0) {
        fn_822315A0();
      }
      *(undefined4 *)(*(int *)(iVar3 + 4) + 0x1a4) = lbl_8326B394;
      *(undefined4 *)(iVar3 + 0x10c) = 0;
    }
    else {
      iVar2 = param_1[1];
      iVar6 = 0;
      iVar7 = 0;
      if ((iVar2 != 0) && (cVar5 = fn_8223AAC0(iVar2), cVar5 != '\0')) {
        iVar6 = iVar1;
        iVar7 = iVar2;
      }
      iVar1 = *(int *)(iVar3 + 0x108);
      *(int *)(iVar3 + 0x108) = iVar7;
      *(int *)(iVar3 + 0x104) = iVar6;
      if (iVar1 != 0) {
        fn_822315A0();
      }
      *(undefined4 *)(iVar3 + 0x10c) = 1;
      puVar4 = (undefined4 *)fn_82279C58(auStack_48,*param_1);
      fn_8266F6A8(*puVar4,0x20);
      if (iStack_44 != 0) {
        fn_822315A0();
      }
    }
  }
  if (param_1[1] != 0) {
    fn_822315A0();
  }
  return;
}

