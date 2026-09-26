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
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_83037EB8();
extern unsigned int lbl_831BC768;
extern unsigned int uRam831bc8dc;


undefined8 fn_83037C10(int *param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  
  if (param_2 < 2) {
    param_2 = 2;
  }
  param_1[3] = param_2;
  uVar5 = 0;
  while( true ) {
    uVar3 = fn_82FA5060(lbl_831BC768,uRam831bc8dc);
    if ((uVar3 & 0xffffffff) == 0) {
      return 0x34;
    }
    uVar2 = param_1[1] - *param_1 >> 3;
    if ((((uint)param_1[2] <= uVar2) && (cVar4 = fn_83037EB8(param_1,8), cVar4 == '\0')) ||
       ((uint)param_1[2] <= uVar2)) break;
    puVar1 = (undefined4 *)param_1[1];
    param_1[1] = (int)(puVar1 + 2);
    if (puVar1 == (undefined4 *)0x0) break;
    uVar5 = uVar5 + 1;
    *puVar1 = (int)uVar3;
    puVar1[1] = 0;
    if (1 < uVar5) {
      return 1;
    }
  }
  fn_82FA5190(lbl_831BC768,uVar3);
  return 0x34;
}

