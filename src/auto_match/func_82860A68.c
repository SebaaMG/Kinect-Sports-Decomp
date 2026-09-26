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
extern int fn_828516B8();
extern int fn_82851730();
extern int fn_82851870();
extern int fn_82F65390();
extern int fn_82F65B18();
extern unsigned int uStack_40;


longlong fn_82860A68(undefined8 param_1)

{
  longlong lVar1;
  int iVar3;
  char *pcVar4;
  longlong lVar2;
  longlong lVar5;
  longlong lVar6;
  undefined4 uStack_40;
  int aiStack_3c [15];
  
  lVar5 = 0;
  uStack_40 = 0;
  lVar6 = -1;
  lVar1 = fn_828516B8();
  if (0 < lVar1) {
    do {
      fn_82851730(param_1,lVar5,&uStack_40);
      fn_82851870(uStack_40,aiStack_3c);
      iVar3 = fn_82F65390(aiStack_3c[0],0xffffffff8201f940,4);
      if (iVar3 == 0) {
        pcVar4 = strstr((char *)(aiStack_3c[0] + 4),";");
        lVar2 = fn_82F65B18((longlong)(int)pcVar4 + 1);
        if ((int)lVar6 < (int)lVar2) {
          lVar6 = lVar2;
        }
      }
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < (int)lVar1);
  }
  return lVar6 + 1;
}

