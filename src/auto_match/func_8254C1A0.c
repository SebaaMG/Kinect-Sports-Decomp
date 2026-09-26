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
extern unsigned int *auStack_34;
extern unsigned int fStack_3c;
extern int fn_8254BF20();
extern int fn_8254F968();
extern int fn_825500E8();
extern unsigned int iStack_38;


void fn_8254C1A0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puStack_40;
  float fStack_3c;
  int iStack_38;
  undefined1 auStack_34 [52];
  
  fStack_3c = *(float *)(*param_1 + 0x82c);
  puVar3 = (undefined4 *)param_1[0x17];
  puVar2 = (undefined4 *)((undefined4 *)param_1[0x17])[1];
  while (*(char *)((int)puVar2 + 0x29) == '\0') {
    if (fStack_3c <= (float)puVar2[3]) {
      puVar3 = puVar2;
      puVar2 = (undefined4 *)*puVar2;
    }
    else {
      puVar2 = (undefined4 *)puVar2[2];
    }
  }
  puStack_40 = *(undefined4 **)param_1[0x17];
  while (puVar2 = puStack_40, puStack_40 != puVar3) {
    iStack_38 = param_1[2];
    iVar1 = fn_8254BF20(param_1,puStack_40 + 4,&iStack_38,puStack_40 + 3,&fStack_3c);
    if (iVar1 == 0) {
      fn_825500E8(&puStack_40);
      fn_8254F968(auStack_34,param_1 + 0x16,puVar2);
    }
    else {
      fn_825500E8(&puStack_40);
    }
  }
  return;
}

