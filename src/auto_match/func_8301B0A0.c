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
extern int fn_83016CE8();
extern int fn_8301A5D0();
extern unsigned int iStack_50;
extern unsigned int uStack_4c;


undefined8 fn_8301B0A0(longlong param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  char cVar5;
  undefined8 uVar4;
  int iStack_50;
  uint uStack_4c;
  undefined4 *puStack_48;
  
  fn_83016CE8(&iStack_50,param_1 + 0x24);
joined_r0x8301b0c4:
  if (puStack_48 == (undefined4 *)0x0) {
    uVar4 = 1;
  }
  else {
    while (*(int *)(puStack_48[2] + 0x5c) < 2) {
LAB_8301b13c:
      puStack_48 = (undefined4 *)*puStack_48;
      while (puStack_48 == (undefined4 *)0x0) {
        uStack_4c = uStack_4c + 1;
        if (0xc0 < uStack_4c) goto joined_r0x8301b0c4;
        puStack_48 = *(undefined4 **)(uStack_4c * 4 + iStack_50);
      }
    }
    uVar1 = puStack_48[1];
    uVar3 = param_2[1] - *param_2 >> 2;
    if (((uVar3 < (uint)param_2[2]) || (cVar5 = fn_8301A5D0(param_2,0x20), cVar5 != '\0')) &&
       (uVar3 < (uint)param_2[2])) {
      puVar2 = (undefined4 *)param_2[1];
      param_2[1] = (int)(puVar2 + 1);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = uVar1;
        goto LAB_8301b13c;
      }
    }
    uVar4 = 0x34;
  }
  return uVar4;
}

