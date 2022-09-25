using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InvertCreator : MonoBehaviour
{

    public float maxTimer;
    public float maxSize;

    CircleCollider2D circCol;
    bool delayEnd;
    float timer;
    // Start is called before the first frame update
    void Start()
    {
        circCol = GetComponent<CircleCollider2D>();
        StartCoroutine(startCount());
        delayEnd = false;
        timer = 0;
    }

    // Update is called once per frame
    void Update()
    {
        if(delayEnd)
        {
            if (timer > maxTimer && circCol.radius <= maxSize)
            {
                timer = 0;
                circCol.radius += 5f;
            }

            else
            {
                timer += Time.deltaTime;
            }
        }
    }

    IEnumerator startCount()
    {
        yield return new WaitForSeconds(15);
        delayEnd = true;

    }
}
