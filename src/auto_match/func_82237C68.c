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
extern int fn_82237E90();
extern int fn_82237EF8();


void fn_82237C68(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_2 != (undefined4 *)*param_1) {
    do {
      if ((param_2 != (undefined4 *)0x0) && (param_2[3] != 1)) break;
      puVar3 = (undefined4 *)param_3[1];
      if (param_2 == puVar3) {
        puVar3 = (undefined4 *)param_3[2];
        if (puVar3[3] == 0) {
          puVar3[3] = 1;
          param_3[3] = 0;
          fn_82237E90(param_3,param_1);
          puVar3 = (undefined4 *)param_3[2];
        }
        iVar2 = puVar3[1];
        if (((iVar2 != 0) && (*(int *)(iVar2 + 0xc) != 1)) ||
           ((puVar3[2] != 0 && (*(int *)(puVar3[2] + 0xc) != 1)))) {
          if ((puVar3[2] == 0) || (*(int *)(puVar3[2] + 0xc) == 1)) {
            *(undefined4 *)(iVar2 + 0xc) = 1;
            puVar3[3] = 0;
            fn_82237EF8(puVar3,param_1);
            puVar3 = (undefined4 *)param_3[2];
          }
          puVar3[3] = param_3[3];
          param_3[3] = 1;
          if (puVar3[2] != 0) {
            *(undefined4 *)(puVar3[2] + 0xc) = 1;
          }
          fn_82237E90(param_3,param_1);
          break;
        }
      }
      else {
        if (puVar3[3] == 0) {
          puVar3[3] = 1;
          param_3[3] = 0;
          fn_82237EF8(param_3,param_1);
          puVar3 = (undefined4 *)param_3[1];
        }
        iVar2 = puVar3[2];
        if (((iVar2 != 0) && (*(int *)(iVar2 + 0xc) != 1)) ||
           ((puVar3[1] != 0 && (*(int *)(puVar3[1] + 0xc) != 1)))) {
          if ((puVar3[1] == 0) || (*(int *)(puVar3[1] + 0xc) == 1)) {
            *(undefined4 *)(iVar2 + 0xc) = 1;
            puVar3[3] = 0;
            fn_82237E90(puVar3,param_1);
            puVar3 = (undefined4 *)param_3[1];
          }
          puVar3[3] = param_3[3];
          param_3[3] = 1;
          if (puVar3[1] != 0) {
            *(undefined4 *)(puVar3[1] + 0xc) = 1;
          }
          fn_82237EF8(param_3,param_1);
          break;
        }
      }
      puVar3[3] = 0;
      bVar1 = param_3 != (undefined4 *)*param_1;
      param_2 = param_3;
      param_3 = (undefined4 *)*param_3;
    } while (bVar1);
  }
  if (param_2 != (undefined4 *)0x0) {
    param_2[3] = 1;
  }
  return;
}

