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
extern int fn_827C5308();
extern int fn_827C5390();
extern int fn_827C53D8();
extern unsigned int lbl_82017AE8;


int fn_827C5428(int *param_1,int param_2)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  
  puVar2 = (ushort *)param_1[param_2 + 0x12];
  if (puVar2 == (ushort *)0x0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x34;
    *(int *)(*param_1 + 0x18) = param_2;
    (**(code **)*param_1)();
  }
  iVar4 = 0;
  lVar6 = 0x40;
  puVar3 = puVar2;
  do {
    if (0xff < *puVar3) {
      iVar4 = 1;
    }
    puVar3 = puVar3 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  if (*(char *)(puVar2 + 0x40) == '\0') {
    fn_827C5390(param_1,0xdb);
    fn_827C53D8(param_1,(-(iVar4 != 0) & 0x40U) + 0x43);
    fn_827C5308(param_1,iVar4 * 0x10 + param_2);
    piVar5 = (int *)&lbl_82017AE8;
    do {
      uVar1 = puVar2[*piVar5];
      if (iVar4 != 0) {
        fn_827C5308(param_1,uVar1 >> 8);
      }
      fn_827C5308(param_1,uVar1 & 0xff);
      piVar5 = piVar5 + 1;
    } while ((int)piVar5 < -0x7dfe8418);
    *(undefined1 *)(puVar2 + 0x40) = 1;
  }
  return iVar4;
}

