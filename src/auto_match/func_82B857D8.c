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
extern unsigned int *auStack_30;
extern int fn_82AEFC28();
extern int fn_82B83188();


undefined8 fn_82B857D8(int *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  bool bVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  uint *puVar8;
  ulonglong uVar9;
  uint auStack_30 [12];
  
  uVar9 = 0;
  for (puVar1 = (uint *)*param_1; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[1]) {
    if ((*puVar1 & 0xe000000) == 0) {
      uVar9 = uVar9 + 1;
    }
  }
  fn_82AEFC28(auStack_30,uVar9,0xffffffff82af07e8,
                    *(undefined4 *)(*(int *)((uint)param_1 & 0xfffff000) + 0x94));
  puVar1 = (uint *)*param_2;
  do {
    if (puVar1 == (uint *)0x0) {
      if (((uVar9 & 0xffffffff) != 0) &&
         (cVar6 = fn_82B83188(auStack_30,0,uVar9 - 1), cVar6 != '\0')) {
        return 0;
      }
      return 1;
    }
    if ((*puVar1 & 0xe000000) == 0) {
      uVar2 = puVar1[3];
      bVar4 = false;
      uVar7 = 1;
      for (puVar3 = (uint *)*param_1; puVar3 != (uint *)0x0; puVar3 = (uint *)puVar3[1]) {
        if ((*puVar3 & 0xe000000) == 0) {
          if (puVar3[3] == uVar2) {
            puVar8 = (uint *)(auStack_30[0] + 4);
            if ((~auStack_30[0] & 1) == 0) {
              puVar8 = auStack_30;
            }
            uVar5 = uVar7 >> 3 & 0x1ffffffc;
            bVar4 = true;
            *(uint *)(uVar5 + (int)puVar8) = 1 << (uVar7 & 0x1f) | *(uint *)(uVar5 + (int)puVar8);
          }
          uVar7 = uVar7 + 1;
        }
      }
      if (!bVar4) {
        return 0;
      }
    }
    puVar1 = (uint *)puVar1[1];
  } while( true );
}

