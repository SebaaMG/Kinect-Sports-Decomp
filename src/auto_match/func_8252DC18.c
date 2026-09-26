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
extern int fn_8251E370();
extern int fn_8251E400();
extern int fn_8251E530();
extern int iRam8326af3c;
extern unsigned int uRam8326af48;
extern unsigned int uRam8326af4c;


void fn_8252DC18(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (uRam8326af4c != 0) {
    do {
      piVar3 = (int *)(uRam8326af48 * uVar4 + iRam8326af3c);
      if (param_1 == 0) {
        uVar1 = piVar3[1];
        piVar3[1] = (int)((ulonglong)uVar1 - 1);
        if ((longlong)((ulonglong)uVar1 - 1) < 1) goto LAB_8252dc68;
      }
      else {
LAB_8252dc68:
        (**(code **)(*(int *)*piVar3 + 8))();
        puVar2 = (undefined4 *)*piVar3;
        if (puVar2 != (undefined4 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
        fn_8251E530(0xffffffff8326af3c,uRam8326af48 * uVar4 + iRam8326af3c);
        uVar4 = uVar4 - 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uRam8326af4c);
  }
  if (param_1 != 0) {
    fn_8251E400(0xffffffff8326af3c);
    fn_8251E370(0xffffffff8326af3c,8,0);
  }
  return;
}

